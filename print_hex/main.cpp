#include <iostream>

int main() {

    for (int i = 0; i < 255; i++) {
      std::cout << "Number: " << std::dec << i << std::endl;
      std::cout << "   Hex: " << std::hex << i << std::endl;
      std::cout << "---------------------------------------" << std::endl;
    }
    return 0;
}
