#include <iostream>
#include <stdio.h>

typedef unsigned char u8;

int switch_sign(u8 a) {
  // or ~a + 1.
  return ~(a - 1);
}

int add(u8 a, u8 b) {
    // or a - ~b -1;
    return (a | b) +,w (a & b);
}

int main() {
    // -x = ~x + 1
    // negative x is the same as bitwise x + 1.
    printf("\n*** Switch sign ***\n");
    std::cout << "Should be -12: " << switch_sign(12) << std::endl;
    std::cout << "Should be -12 in binary: " << std::bitset<8>(switch_sign(12)) << std::endl;

    printf("\n*** Addition ***\n");
    std::cout << "Should be 13: " << add(6, 7) << std::endl;
    std::cout << "Formula: (a | b) + (a & b)" << std::endl;
    std::cout << "           6 in binary: " << std::bitset<8>(6) << std::endl;
    std::cout << "           7 in binary: " << std::bitset<8>(7) << std::endl;
    std::cout << "                 a | b: " << std::bitset<8>(6|7) << std::endl;
    std::cout << "                 a & b: " << std::bitset<8>(6&7) << std::endl;
    std::cout << "Should be 13 in binary: " << std::bitset<8>(add(6, 7)) << std::endl;
    return 0;
}
