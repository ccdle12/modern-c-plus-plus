#include <iostream>

int main() {

    // Static cast
    // Compile time cast.
    // The processor needs to invoke calculations to convert a number to different
    // bit representation, e.g. static_cast from int(12) -> unsigned float (12.0f)
    // It will NOT allow illegal conversions.
    int* a = new int(10);
    void* b = static_cast<void*>(a);
    int* c = static_cast<int*>(a);

    int d = 5;
    float e = static_cast<float>(d);

    std::cout << "A value: " << *a << std::endl;
    std::cout << "C value: " << *c << std::endl;
    std::cout << "E value: " << e << std::endl;

    // Reinterpret cast
    // The CPU DOES NOT invoke any calculations. It reinterprets the pointer, pointing
    // to the bytes in memory as a pointer of a different type.
    float* f = reinterpret_cast<float*>(a);
    std::cout << "F value: " << *f << std::endl;
}
