#pragma once
#include <cstdint>

namespace EA {
	namespace Reflection {
		struct Int64 { //8
			int64_t v;
		};
		struct Int32 { //4
			int32_t v;
		};
		struct Int16 { //2
			int16_t v;
		};
		struct Int8 { //1
			int8_t v;
		};
		struct UInt64 { //8
			uint64_t v;
		};
		struct UInt32 { //4
			uint32_t v;
		};
		struct UInt16 { //2
			uint16_t v;
		};
		struct UInt8 { //1
			uint8_t v;
		};
		struct Char { //1
			char v;
		};
		struct Bool { //1
			bool v;
		};
		struct Float { //4
			float v;
		};
		struct Double { //8
			double v;
		};
		struct Text { //4
			uint32_t offset; //std::string
		};
		struct Reference { //4
			uint32_t v;
		};
		struct Type { //8
			uint64_t v;
		};
		struct KeyValueAttrib { //8
			uint64_t k;
		};
	};
};