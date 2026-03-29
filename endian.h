template <typename T>
T swapEndianness(T value, bool bigEndian = 1) {
    if (bigEndian) {
        constexpr size_t size = sizeof(T);
        T result = 0;

        for (size_t i = 0; i < size; ++i) {
            result |= (static_cast<T>((value >> (8 * i)) & 0xFF) << (8 * (size - 1 - i)));
        }

        return result;
    }
    else {
        return value;
    }
}