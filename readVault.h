#include <iostream>
#include <algorithm>
#include <unordered_map>
#include "endian.h"
#include "AttribHashes.h"
#include "Attrib.h"

enum class NodeFlags : uint8_t {
    None = 0,
    IsArray = 1 << 0,   // 1
    InLayout = 1 << 1,   // 2
    IsBound = 1 << 2,   // 4
    IsNotSearchable = 1 << 3,   // 8
    IsStatic = 1 << 4,   // 16
    HasHandler = 1 << 5,   // 32
    IsNotPtr = 1 << 6    // 64
};

enum class PointerType : uint16_t {
    END = 0,
    NONE = 1,
    SETFIXUPTARGET = 2,
    DEPRELATIVE = 3,
    EXPORT = 4
};

inline NodeFlags operator&(NodeFlags a, NodeFlags b) {
    return static_cast<NodeFlags>(static_cast<uint8_t>(a) & static_cast<uint8_t>(b));
}

static const std::pair<NodeFlags, std::string> NodeFlagsMap[] = {
    { NodeFlags::IsArray, "Is_Array" },
    { NodeFlags::InLayout, "In_Layout" },
    { NodeFlags::IsBound, "Is_Bound" },
    { NodeFlags::IsNotSearchable, "Is_Not_Searchable" },
    { NodeFlags::IsStatic, "Is_Static" },
    { NodeFlags::HasHandler, "Has_Handler" },
    { NodeFlags::IsNotPtr, "Is_Not_Pointer" }
};

std::string NodeFlagsToString(NodeFlags flags) {
    if (flags == NodeFlags::None) return "None";

    std::vector<std::string> parts;
    for (const std::pair<NodeFlags, std::string>& p : NodeFlagsMap) {
        NodeFlags bit = p.first;
        const std::string& name = p.second;

        if ((flags & bit) != NodeFlags::None) {
            parts.push_back(name);
        }
    }

    std::string result;
    for (size_t i = 0; i < parts.size(); ++i) {
        result += parts[i];
        if (i + 1 < parts.size()) result += " | ";
    }
    return result;
}

enum class InstanceFlags : uint8_t {
    dynamic = 1
};

std::string InstanceFlagsToString(InstanceFlags flags) {
    if (flags == InstanceFlags::dynamic) return "Dynamic";
    else {
        return "";
    }
}

static std::unordered_map<std::uint64_t, std::string> hashLookup = {
    { 0,                    "None" },
    { 0x2A7895AC4A876152,   "Attrib::ClassLoadData" },
    { 0xAD303B8F42B3307E,   "Attrib::CollectionLoadData" },
    { 0xB38846845E9C175,    "Attrib::DatabaseLoadData" }
};

void loadLookup()
{
    auto loadFile = [&](const std::string& path)
        {
            std::ifstream file(path);
            if (!file.is_open())
                return; // or throw

            std::string line;
            while (std::getline(file, line))
            {
                // Remove carriage returns or trailing spaces if needed
                if (!line.empty() && line.back() == '\r')
                    line.pop_back();
                hashLookup[lookup8(reinterpret_cast<const ub1*>(line.c_str()), line.size(), 0xABCDEF0011223344ULL)] = line;
            }
        };

    loadFile("keys/S3Keys.dat");
    loadFile("keys/S3Types.dat");
    loadFile("keys/S3Classes.dat");
    loadFile("keys/S3Objects.dat");
}

void readVersionNode(const uint8_t* vaultData, uint32_t offset) {
    uint64_t version = swapEndianness(*reinterpret_cast<const uint64_t*>(vaultData + offset + sizeof(Attrib::Vault::ChunkBlock)));
}
void readHelperNode(const uint8_t* vaultData, uint32_t offset) {
    // Implementation for reading HelperNode
}
void readDependencyNode(const uint8_t* vaultData, uint32_t offset) {
    const Attrib::Vault::DependencyNode* DepN =
        reinterpret_cast<const Attrib::Vault::DependencyNode*>(vaultData + offset);

    uint64_t count = swapEndianness(DepN->mCount);

    const uint8_t* cursor = vaultData + offset + sizeof(Attrib::Vault::DependencyNode);

    for (uint64_t i = 0; i < count; ++i) {
        uint64_t id = swapEndianness(*reinterpret_cast<const uint64_t*>(cursor));
        cursor += sizeof(uint64_t);
        // process id…
    }

    uint64_t stringSize = swapEndianness(*reinterpret_cast<const uint64_t*>(cursor));
    cursor += sizeof(uint64_t);

    // Read each string according to its size
    for (uint64_t i = 0; i < count; ++i) {
        const char* str = reinterpret_cast<const char*>(cursor);
        std::string s(str, stringSize);
        cursor += stringSize;
    }
}

void readExportNode(const uint8_t* vaultData, uint32_t offset) {
    const Attrib::Vault::ExportNode* ExpN =
        reinterpret_cast<const Attrib::Vault::ExportNode*>(vaultData + offset);

    uint64_t count = swapEndianness(ExpN->mCount);
    uint32_t exportsOffset = offset + sizeof(Attrib::Vault::ExportNode);

    for (uint64_t i = 0; i < count; ++i) {
        const Attrib::Vault::ExportEntry* ExpEntry =
            reinterpret_cast<const Attrib::Vault::ExportEntry*>(vaultData + exportsOffset);
        std::cout << "Export Type: " << hashLookup[swapEndianness(ExpEntry->mType)] << std::endl;
		std::cout << "Data Bytes: " << swapEndianness(ExpEntry->mDataBytes) << std::endl; // Size of the data chunk
		std::cout << "Data Offset: " << swapEndianness(ExpEntry->mDataOffset) << std::endl; // Offset to the data chunk in datanode

        uint32_t dataBlockOffset = swapEndianness(ExpEntry->mDataOffset);

        const Attrib::CollectionLoadData* DatN =
            reinterpret_cast<const Attrib::CollectionLoadData*>(vaultData + dataBlockOffset);

        dataBlockOffset += sizeof(Attrib::CollectionLoadData);

        std::string expID = hashLookup[swapEndianness(DatN->mClass)] + "/" + hashLookup[swapEndianness(DatN->mKey)];
        hashLookup[lookup8(reinterpret_cast<const ub1*>(expID.c_str()), expID.size(), 0xABCDEF0011223344ULL)] = expID;

        if (hashLookup[swapEndianness(ExpEntry->mID)] == "") {
            std::cout << "Export ID: " << swapEndianness(ExpEntry->mID) << std::endl;
        }
        else {
            std::cout << "Export ID: " << hashLookup[swapEndianness(ExpEntry->mID)] << std::endl;
        }

        std::cout << "Export Type: " << hashLookup[swapEndianness(ExpEntry->mType)] << std::endl;
        std::cout << "Data Bytes: " << swapEndianness(ExpEntry->mDataBytes) << std::endl; // Size of the data chunk
        std::cout << "Data Offset: " << swapEndianness(ExpEntry->mDataOffset) << std::endl; // Offset to the data chunk in datanode

        uint16_t numtypes = swapEndianness(DatN->mNumTypes);
        uint16_t typeslen = swapEndianness(DatN->mTypesLen);
		std::cout << "Object: " << hashLookup[swapEndianness(DatN->mKey)] << std::endl;
		std::cout << "Class: " << hashLookup[swapEndianness(DatN->mClass)] << std::endl;
        std::cout << "Parent: " << hashLookup[swapEndianness(DatN->mParent)] << std::endl;
        std::cout << "Layout Pointer: " << swapEndianness(DatN->mLayout) << std::endl;

        std::vector<std::string> types;

        for (uint32_t i = 0; i < numtypes; ++i) {
            uint64_t type = swapEndianness(*reinterpret_cast<const uint64_t*>(
                vaultData + dataBlockOffset + i * sizeof(uint64_t)));
			types.push_back(hashLookup[type]);
        }

        dataBlockOffset += typeslen * sizeof(uint64_t);
        uint32_t numentries = swapEndianness(DatN->mNumEntries);

        for (uint32_t i = 0; i < numentries; ++i) {
            const Attrib::CollectionLoadData::AttribEntry* DatEntry =
                reinterpret_cast<const Attrib::CollectionLoadData::AttribEntry*>(vaultData + dataBlockOffset + i * sizeof(Attrib::CollectionLoadData::AttribEntry));
            if (hashLookup[swapEndianness(DatEntry->mKey)] == "") {
                std::cout << "  Entry Key: " << swapEndianness(DatEntry->mKey) << std::endl;
            }
            else {
                std::cout << "  Entry Key: " << hashLookup[swapEndianness(DatEntry->mKey)] << std::endl;
			}
            std::cout << "  Entry Data Offset: " << swapEndianness(DatEntry->mData) << std::endl;
            std::cout << "  Entry Type: " << types[swapEndianness(DatEntry->mType)] << std::endl;
            std::cout << "  Entry Node Flags: " << NodeFlagsToString(static_cast<NodeFlags>(DatEntry->mNodeFlags)) << std::endl;
			std::cout << "  Entry Entry Flags: " << InstanceFlagsToString(static_cast<InstanceFlags>(DatEntry->mEntryFlags)) << std::endl;
        }

        exportsOffset += sizeof(Attrib::Vault::ExportEntry);
    }
}


uint64_t readu64(const uint8_t* binData, size_t offset) {
    uint64_t value;
    std::memcpy(&value, binData + offset, sizeof(uint64_t));
    return swapEndianness(value);
}

std::string readString(const uint8_t* binData, size_t offset)
{
    if (!binData) return "";

    const uint8_t* ptr = binData + offset;
    size_t len = 0;

    // Scan until null-terminator
    while (ptr[len] != 0) {
        ++len;
    }

    return std::string(reinterpret_cast<const char*>(ptr), len);
}

void readPointerNode(const uint8_t* vaultData, const uint8_t* binData, uint32_t offset, uint32_t chunkSize) {
    uint32_t pointerNodeOffset = offset + sizeof(Attrib::Vault::ChunkBlock);
    while (pointerNodeOffset + sizeof(Attrib::PtrRef) < offset + chunkSize) {
        const Attrib::PtrRef* PtrN =
            reinterpret_cast<const Attrib::PtrRef*>(vaultData + pointerNodeOffset);

        std::cout << "Fixup Offset: " << swapEndianness(PtrN->mFixupOffset) << std::endl;
		PointerType ptrType = static_cast<PointerType>(swapEndianness(PtrN->mPtrType));
        std::cout << "Index: " << swapEndianness(PtrN->mIndex) << std::endl;
        uint32_t offsetVal = swapEndianness(PtrN->mOffset);
		std::string StringID = "";

        switch (ptrType) {
        case PointerType::END:
            return; // stop processing
        case PointerType::NONE:
            std::cout << "Offset: NULL Pointer" << std::endl;
            break;
        case PointerType::SETFIXUPTARGET:
            std::cout << "Offset_SETFIXUPTARGET: " << offsetVal << std::endl;
            break;
        case PointerType::DEPRELATIVE:
            StringID = readString(binData, offsetVal);
            hashLookup[lookup8(reinterpret_cast<const ub1*>(StringID.c_str()), StringID.size(), 0xABCDEF0011223344ULL)] = StringID;
            std::cout << "Offset: " << StringID << " " << offsetVal << std::endl;
            break;
        case PointerType::EXPORT:
            uint64_t value = readu64(binData, offsetVal);
            if (hashLookup[value] == "") {
                std::cout << "Export ID: " << value << std::endl;
            }
            else {
                std::cout << "Export ID: " << hashLookup[value] << std::endl;
            }
            break;
        }
        pointerNodeOffset += sizeof(Attrib::PtrRef);
    };
}

void readEndNode(const uint8_t* vaultData, uint32_t offset) {
    // Implementation for reading EndNode
}

struct ChunkInfo {
    uint32_t type;
    uint32_t size;
    size_t offset;
};

int priority(uint32_t type)
{
    switch (type)
    {
    case 0x56657273: return 0; // versNode
    case 0x5374724E: return 1; // startNode
    case 0x4465704E: return 2; // depNode
    case 0x4461744E: return 3; // dataNode
    case 0x5074724E: return 4; // ptrNode
    case 0x4578704E: return 5; // expNode
    case 0x456E6443: return 6; // endNode
    default: return 99; // unknown
    }
}

void readAttribulator(const uint8_t* vaultData, size_t vaultSize, const uint8_t* binData, size_t binSize)
{
    loadLookup();
    //loadBinaryforLookup(binData, binSize);
    std::vector<ChunkInfo> chunks;

    size_t offset = 0;
    while (offset < vaultSize) {
        if (offset + sizeof(Attrib::Vault::ChunkBlock) > vaultSize) {
            std::cerr << "Unexpected end of vault data." << std::endl;
            return;
        }

        const Attrib::Vault::ChunkBlock* chunk = reinterpret_cast<const Attrib::Vault::ChunkBlock*>(vaultData + offset);
        uint32_t chunkType = swapEndianness(chunk->mType);
        uint32_t chunkSize = swapEndianness(chunk->mSize);

        chunks.push_back({ chunkType, chunkSize, offset });
        offset += chunkSize;
    }

    // Sort chunks by priority
    std::sort(chunks.begin(), chunks.end(),
        [](const ChunkInfo& a, const ChunkInfo& b) {
            return priority(a.type) < priority(b.type);
        }
    );

    // Process chunks in sorted order
    for (const auto& ch : chunks) {
        switch (ch.type) {
        case 0x56657273: // versNode
            readVersionNode(vaultData, ch.offset);
            break;
        case 0x5374724E: // startNode
            readHelperNode(vaultData, ch.offset);
            break;
        case 0x4465704E: // depNode
            readDependencyNode(vaultData, ch.offset);
            break;
        case 0x4461744E: // dataNode
            break;
        case 0x5074724E: // ptrNode
            readPointerNode(vaultData, binData, ch.offset, ch.size);
            break;
        case 0x4578704E: // expNode
            readExportNode(vaultData, ch.offset);
            break;
        case 0x456E6443: // endNode
            readEndNode(vaultData, ch.offset);
            break;
        default:
            std::cerr << "Unknown chunk type: " << ch.type << std::endl;
            break;
        }
    }
}