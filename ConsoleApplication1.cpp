#include <cstdint>
#include <cstring>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <vector>
#include "readVault.h"

static std::string changeExtension(const std::string& path, const std::string& newExt) {
    size_t pos = path.rfind('.');
    if (pos == std::string::npos) return path + newExt; // no extension found
    return path.substr(0, pos) + newExt;
}

// Example usage
int main() {
    std::string vaultFilename = "C:/path/to/your/vault.vlt";   // <-- change to your vault file
    std::string binFilename = changeExtension(vaultFilename, ".bin");

    // Open file in binary mode, at the end (to get size)
    std::ifstream vaultFile(vaultFilename, std::ios::binary | std::ios::ate);
    if (!vaultFile) {
        std::cerr << "Failed to open vault file: " << vaultFilename << std::endl;
        return 1;
    }

    std::streamsize vaultFileSize = vaultFile.tellg();
    if (vaultFileSize <= 0) {
        std::cerr << "File is empty or invalid." << std::endl;
        return 1;
    }

    // Allocate buffer
    std::vector<uint8_t> vaultBuffer(vaultFileSize);

    // Read file from beginning
    vaultFile.seekg(0, std::ios::beg);
    if (!vaultFile.read(reinterpret_cast<char*>(vaultBuffer.data()), vaultFileSize)) {
        std::cerr << "Failed to read file." << std::endl;
        return 1;
    }

    std::ifstream binFile(binFilename, std::ios::binary | std::ios::ate);
    if (!binFile) {
        std::cerr << "Failed to open binary file: " << binFilename << std::endl;
        return 1;
    }

    std::streamsize binFileSize = binFile.tellg();
    if (binFileSize <= 0) {
        std::cerr << "File is empty or invalid." << std::endl;
        return 1;
    }

    // Allocate buffer
    std::vector<uint8_t> binBuffer(binFileSize);

    // Read file from beginning
    binFile.seekg(0, std::ios::beg);
    if (!binFile.read(reinterpret_cast<char*>(binBuffer.data()), binFileSize)) {
        std::cerr << "Failed to read file." << std::endl;
        return 1;
    }

    // Call your attribulator reader
    readAttribulator(vaultBuffer.data(), vaultBuffer.size(), binBuffer.data(), binBuffer.size());

    return 0;
}
