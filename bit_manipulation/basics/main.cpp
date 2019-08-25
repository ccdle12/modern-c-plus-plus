#include <iostream>
#include <stdio.h>

// Shorthand definition for unsigned char (unsigned 8 bytes).
typedef unsigned char u8;

// Prints u8s in their binary represenation.
void print_in_binary(u8 a, u8 b) {
    std::cout << "a in binary: " << std::bitset<8>(a) << std::endl;
    std::cout << "b in binary: " << std::bitset<8>(b) << std::endl;
}

// Returns the result of a Bitwise AND.
u8 bitwise_and(u8 a, u8 b) {

  return a & b;
}

// Returns the result of a Bitwise OR.
u8 bitwise_or(u8 a, u8 b) {
  return a | b;
}

// Returns the result of a Bitwise XOR.
u8 bitwise_xor(u8 a, u8 b) {
  return a ^ b;
}

// Shifts the u8eger by amount.
u8 left_shift(u8 a, u8 amount) {
  u8 c = a; 
  return c << amount;
}

// Shifts the u8eger by amount.
u8 right_shift(u8 a, u8 amount) {
  u8 c = a; 
  return c >> amount;
}

// Retuns the inversion of bits given an u8.
u8 bitwise_not(u8 a) {
  return ~a;
}

u8 turn_off_right_most_bit(u8 a) {
    return a & (a - 1);
}

u8 turn_on_right_most_bit(u8 a) {
    return a | (a + 1);
}

u8 turn_off_trailing_ones(u8 a) {
    return a & (a + 1);
}

u8 turn_on_trailing_zeroes(u8 a) {
    return a | (a - 1);
}

u8 create_word_with_single_bit(u8 a) {
  return ~a & (a + 1);
}

u8 create_word_with_single_off_bit(u8 a) {
  return ~a | (a - 1);
}

u8 switch_trailing_ones_to_zeroes(u8 a) {
  return ~a | (a + 1);
}

u8 isolate_right_most_bit(u8 a) {
  return a & (-a);
}

u8 trailing_ones_at_right_most_zero(u8 a) {
  return a ^ (a - 1);
}

u8 trailing_ones_at_right_most_one(u8 a) {
  return a ^ (a + 1);
}

bool is_power_of_two(u8 a) {
  printf("\n in function call: %d\n", (a & (a-1)));

  // 1. Checks if a is 0 (a)
  // 2. Checks that result of forumla is zero, meaning a power (!(a & (a - 1)))
  std::cout << "    a in binary: " << std::bitset<8>(a) << std::endl;
  std::cout << "a - 1 in binary: " << std::bitset<8>(a-1) << std::endl;
  std::cout << "         result: " << std::bitset<8>(a & (a-1)) << std::endl;
  return (a && !turn_off_right_most_bit(a));
}

u8 turn_off_right_most_continguous_strings(u8 a) {
    return ((a | (a - 1)) + 1) & a;
}

int main() {
    // a = (0000 0101) 
    // b = (0000 1001)
    // c = (0000 1100)
    // d = (0101 1000)
    // e = (0101 1010)
    // f = (0101 1011)
    // g = (0101 1100)
    // h = (0101 1111)
    u8 a = 5, b = 9;
    u8 c = 12;
    u8 d = 88;
    u8 e = 90;
    u8 f = 91;
    u8 g = 60;
    u8 h = 63;
    printf("a as u8 = %d\n", a);
    printf("b as u8 = %d\n", b);
    printf("c as u8 = %d\n", c);
    printf("d as u8 = %d\n", d);
    printf("e as u8 = %d\n", e);
    printf("f as u8 = %d\n", f);
    printf("g as u8 = %d\n", g);
    printf("h as u8 = %d\n", h);
    printf(">>\n");
    
    // Print in Binary.
    print_in_binary(a, b);
    std::cout << "c in binary: " << std::bitset<8>(c) << std::endl;
    std::cout << "d in binary: " << std::bitset<8>(d) << std::endl;
    std::cout << "e in binary: " << std::bitset<8>(e) << std::endl;
    std::cout << "f in binary: " << std::bitset<8>(f) << std::endl;
    std::cout << "g in binary: " << std::bitset<8>(g) << std::endl;
    std::cout << "h in binary: " << std::bitset<8>(h) << std::endl;
    printf(">>\n");

    // Bitwise AND.
    printf("Bitwise AND u8: %d\n", bitwise_and(a, b));
    std::cout << "Bitwise AND byte: " << std::bitset<8>(bitwise_and(a, b)) << std::endl;
    printf(">>\n");

    // Bitwise OR.
    std::cout << "Bitwise OR byte: " << std::bitset<8>(bitwise_or(a, b)) << std::endl;
    printf("Bitwise OR u8: %d\n", bitwise_or(a, b));
    printf(">>\n");

    // Bitwise XOR.
    std::cout << "Bitwise XOR byte: " << std::bitset<8>(bitwise_xor(a, b)) << std::endl;
    printf("Bitwise XOR u8: %d\n", bitwise_xor(a, b));
    printf(">>\n");

    // Left Shift.
    printf("\n***LEFT SHIFT***\n");
    std::cout << "Left Shift a by 1 byte: " << std::bitset<8>(left_shift(a, 1)) << std::endl;
    printf("Left Shift u8 a by 1 byte: %d\n", left_shift(a, 1));
    std::cout << "Left Shift b by 1 byte: " << std::bitset<8>(left_shift(b, 1)) << std::endl;
    printf("Left Shift u8 b by 1 byte: %d\n", left_shift(b, 1));
    printf(">>\n");

    // Right Shift.
    printf("\n***RIGHT SHIFT***\n");
    std::cout << "Right Shift a by 1 byte: " << std::bitset<8>(right_shift(a, 1)) << std::endl;
    printf("Right Shift u8 a by 1 byte: %d\n", right_shift(a, 1));
    std::cout << "Right Shift b by 1 byte: " << std::bitset<8>(right_shift(b, 1)) << std::endl;
    printf("Right Shift u8 b by 1 byte: %d\n", right_shift(b, 1));
    printf(">>\n");

    // Bitwise NOT.
    printf("\n***BITWISE NOT***\n");
    std::cout << "Bitwise NOT byte: " << std::bitset<8>(bitwise_not(a)) << std::endl;
    printf("Bitwise NOT u8 a byte: %d\n", bitwise_not(a));
    printf(">>\n");

    // Turn off the right most bit.
    // Turn on right most bit.
    printf("\n***TURN OFF RIGHT MOST BIT***\n");
    std::cout << " a before bit: " << std::bitset<8>(a) << std::endl;
    std::cout << "        a - 1: " << std::bitset<8>(a - 1) << std::endl;
    std::cout << "Rightmost bit: " << std::bitset<8>(turn_off_right_most_bit(a)) << std::endl;
    printf(">>\n");
    std::cout << " c before bit: " << std::bitset<8>(c) << std::endl;
    std::cout << "        c - 1: " << std::bitset<8>(c - 1) << std::endl;
    std::cout << "Rightmost bit: " << std::bitset<8>(turn_off_right_most_bit(c)) << std::endl;
    printf(">>\n");
    std::cout << " d before bit: " << std::bitset<8>(d) << std::endl;
    std::cout << "        d - 1: " << std::bitset<8>(d - 1) << std::endl;
    std::cout << "Rightmost bit: " << std::bitset<8>(turn_off_right_most_bit(d)) << std::endl;
    printf(">>\n");

    // Turn on right most bit.
    printf("\n***TURN ON RIGHT MOST BIT***\n");
    std::cout << " a before bit: " << std::bitset<8>(a) << std::endl;
    std::cout << "        a + 1: " << std::bitset<8>(a + 1) << std::endl;
    std::cout << "Rightmost bit: " << std::bitset<8>(turn_on_right_most_bit(a)) << std::endl;
    printf(">>\n");
    std::cout << " b before bit: " << std::bitset<8>(b) << std::endl;
    std::cout << "        b + 1: " << std::bitset<8>(b + 1) << std::endl;
    std::cout << "Rightmost bit: " << std::bitset<8>(turn_on_right_most_bit(b)) << std::endl;
    printf(">>\n");
    std::cout << " c before bit: " << std::bitset<8>(c) << std::endl;
    std::cout << "        c + 1: " << std::bitset<8>(c + 1) << std::endl;
    std::cout << "Rightmost bit: " << std::bitset<8>(turn_on_right_most_bit(c)) << std::endl;
    printf(">>\n");
    std::cout << " d before bit: " << std::bitset<8>(d) << std::endl;
    std::cout << "        d + 1: " << std::bitset<8>(d + 1) << std::endl;
    std::cout << "Rightmost bit: " << std::bitset<8>(turn_on_right_most_bit(d)) << std::endl;
    printf(">>\n");

    // Turn off trailing ones.
    printf("\n***TURN OFF TRAILINGS ONES***\n");
    std::cout << " a before bit: " << std::bitset<8>(a) << std::endl;
    std::cout << "        a + 1: " << std::bitset<8>(a + 1) << std::endl;
    std::cout << "Turn off trailing ones: " << std::bitset<8>(turn_off_trailing_ones(a)) << std::endl;
    printf(">>\n");
    std::cout << " b before bit: " << std::bitset<8>(b) << std::endl;
    std::cout << "        b + 1: " << std::bitset<8>(b + 1) << std::endl;
    std::cout << "Turn off trailing ones: " << std::bitset<8>(turn_off_trailing_ones(b)) << std::endl;
    printf(">>\n");
    std::cout << " c before bit: " << std::bitset<8>(c) << std::endl;
    std::cout << "        c + 1: " << std::bitset<8>(c + 1) << std::endl;
    std::cout << "Turn off trailing ones: " << std::bitset<8>(turn_off_trailing_ones(c)) << std::endl;
    printf(">>\n");
    std::cout << " d before bit: " << std::bitset<8>(d) << std::endl;
    std::cout << "        d + 1: " << std::bitset<8>(d + 1) << std::endl;
    std::cout << "Turn off trailing ones: " << std::bitset<8>(turn_off_trailing_ones(d)) << std::endl;
    printf(">>\n");
    std::cout << " e before bit: " << std::bitset<8>(e) << std::endl;
    std::cout << "        e + 1: " << std::bitset<8>(e + 1) << std::endl;
    std::cout << "Turn off trailing ones: " << std::bitset<8>(turn_off_trailing_ones(e)) << std::endl;
    printf(">>\n");
    std::cout << " f before bit: " << std::bitset<8>(f) << std::endl;
    std::cout << "        f + 1: " << std::bitset<8>(f + 1) << std::endl;
    std::cout << "Turn off trailing ones: " << std::bitset<8>(turn_off_trailing_ones(f)) << std::endl;
    printf(">>\n");
    std::cout << " g before bit: " << std::bitset<8>(g) << std::endl;
    std::cout << "        g + 1: " << std::bitset<8>(g + 1) << std::endl;
    std::cout << "Turn off trailing ones: " << std::bitset<8>(turn_off_trailing_ones(g)) << std::endl;
    printf(">>\n");
    std::cout << " h before bit: " << std::bitset<8>(h) << std::endl;
    std::cout << "        h + 1: " << std::bitset<8>(h + 1) << std::endl;
    std::cout << "Turn off trailing ones: " << std::bitset<8>(turn_off_trailing_ones(h)) << std::endl;
    printf(">>\n");

    // Turn on trailing zeroes.
    printf("\n***TURN ON TRAILINGS ZEROES***\n");
    std::cout << " a before bit: " << std::bitset<8>(a) << std::endl;
    std::cout << "        a - 1: " << std::bitset<8>(a - 1) << std::endl;
    std::cout << "Turn on trailing zeroes: " << std::bitset<8>(turn_on_trailing_zeroes(a)) << std::endl;
    printf(">>\n");
    std::cout << " b before bit: " << std::bitset<8>(b) << std::endl;
    std::cout << "        b - 1: " << std::bitset<8>(b - 1) << std::endl;
    std::cout << "Turn on trailing zeroes: " << std::bitset<8>(turn_on_trailing_zeroes(b)) << std::endl;
    printf(">>\n");
    std::cout << " c before bit: " << std::bitset<8>(c) << std::endl;
    std::cout << "        c - 1: " << std::bitset<8>(c - 1) << std::endl;
    std::cout << "Turn on trailing zeroes: " << std::bitset<8>(turn_on_trailing_zeroes(c)) << std::endl;
    printf(">>\n");
    std::cout << " d before bit: " << std::bitset<8>(d) << std::endl;
    std::cout << "        d - 1: " << std::bitset<8>(d - 1) << std::endl;
    std::cout << "Turn on trailing zeroes: " << std::bitset<8>(turn_on_trailing_zeroes(d)) << std::endl;
    printf(">>\n");
    std::cout << " e before bit: " << std::bitset<8>(e) << std::endl;
    std::cout << "        e - 1: " << std::bitset<8>(e - 1) << std::endl;
    std::cout << "Turn on trailing zeroes: " << std::bitset<8>(turn_on_trailing_zeroes(e)) << std::endl;
    printf(">>\n");
    std::cout << " f before bit: " << std::bitset<8>(f) << std::endl;
    std::cout << "        f - 1: " << std::bitset<8>(f - 1) << std::endl;
    std::cout << "Turn on trailing zeroes: " << std::bitset<8>(turn_on_trailing_zeroes(f)) << std::endl;
    printf(">>\n");
    std::cout << " g before bit: " << std::bitset<8>(g) << std::endl;
    std::cout << "        g - 1: " << std::bitset<8>(g - 1) << std::endl;
    std::cout << "Turn on trailing zeroes: " << std::bitset<8>(turn_on_trailing_zeroes(g)) << std::endl;
    printf(">>\n");
    std::cout << " h before bit: " << std::bitset<8>(h) << std::endl;
    std::cout << "        h - 1: " << std::bitset<8>(h - 1) << std::endl;
    std::cout << "Turn on trailing zeroes: " << std::bitset<8>(turn_on_trailing_zeroes(h)) << std::endl;
    printf(">>\n");

    printf("\n*** Twos compliment ***\n");
    std::cout << "-12: " << std::bitset<8>(-12) << std::endl;
    std::cout << " 12: " << std::bitset<8>(12) << std::endl;
    std::cout << " -8: " << std::bitset<8>(-8) << std::endl;
    std::cout << "  8: " << std::bitset<8>(8) << std::endl;

    printf("\n*** Create single word with one bit at right most 0 bit ***\n");
    std::cout << "         h before bit: " << std::bitset<8>(h) << std::endl;
    std::cout << "                h + 1: " << std::bitset<8>(h + 1) << std::endl;
    std::cout << "single right most bit: " << std::bitset<8>(create_word_with_single_bit(h)) << std::endl;

    printf("\n*** Create single word with all set bits at right most 1 bit ***\n");
    std::cout << "         h before bit: " << std::bitset<8>(h) << std::endl;
    std::cout << "                h - 1: " << std::bitset<8>(h - 1) << std::endl;
    std::cout << "single right most bit: " << std::bitset<8>(create_word_with_single_off_bit(h)) << std::endl;

    printf("\n*** 1s at trailing 0s and 0s elsewhere ***\n");
    // before = (0101 1000) = 8 + 16 + 64 = 24 + 64 = 88
    u8 before = 88;
    u8 after = ~before & (before - 1); 
    std::cout << "               before: " << std::bitset<8>(before) << std::endl;
    std::cout << "   before bitwise not: " << std::bitset<8>(~before) << std::endl;
    std::cout << "           before - 1: " << std::bitset<8>(before - 1) << std::endl;
    std::cout << "~before & (before -1): " << std::bitset<8>(after) << std::endl;

    printf("\n*** Hex printing ***\n");
    u8 one = 0x01;
    printf("one: %d\n", one);
    printf("255: %d\n", 0xFF);

    printf("\n*** switch trailing ones to zeroes ***\n");
    std::cout << "                   h before bit: " << std::bitset<8>(h) << std::endl;
    std::cout << "                          h + 1: " << std::bitset<8>(h + 1) << std::endl;
    std::cout << "Switch trailing ones to zerores: " << std::bitset<8>(switch_trailing_ones_to_zeroes(h)) << std::endl;

    printf("\n*** Isolate right most bit ***\n");
    std::cout << "                   h before bit: " << std::bitset<8>(h) << std::endl;
    std::cout << "                          -h   : " << std::bitset<8>(-h) << std::endl;
    std::cout << "        Turn off right most bit: " << std::bitset<8>(isolate_right_most_bit(h)) << std::endl;


    printf("\n*** TRAILING ONES AT RIGHT MOST ZERO***\n");
    std::cout << "                   d before bit: " << std::bitset<8>(before) << std::endl;
    std::cout << "                         d-1   : " << std::bitset<8>(before-1) << std::endl;
    std::cout << "        Trailing ones at right most: " << std::bitset<8>(trailing_ones_at_right_most_zero(before)) << std::endl;

    printf("\n*** TRAILING ONES AT RIGHT MOST ONE***\n");
    std::cout << "                   d before bit: " << std::bitset<8>(before) << std::endl;
    std::cout << "                         d-1   : " << std::bitset<8>(before-1) << std::endl;
    std::cout << "        Trailing ones at right most: " << std::bitset<8>(trailing_ones_at_right_most_one(before)) << std::endl;

    printf("\n*** IS POWER OF 2 ***\n");
    std::cout << "4: " << std::bitset<8>(4) << std::endl;
    std::cout << "is power of two: " << is_power_of_two(4) << std::endl;
    printf(">>\n");

    std::cout << "5: " << std::bitset<8>(5) << std::endl;
    std::cout << "is power of two: " << is_power_of_two(5) << std::endl;
    printf(">>\n");

    std::cout << "64: " << std::bitset<8>(64) << std::endl;
    std::cout << "is power of two: " << is_power_of_two(64) << std::endl;
    printf(">>\n");

    std::cout << "127: " << std::bitset<8>(127) << std::endl;
    std::cout << "is power of two: " << is_power_of_two(127) << std::endl;
    printf(">>\n");

    std::cout << "66: " << std::bitset<8>(66) << std::endl;
    std::cout << "is power of two: " << is_power_of_two(66) << std::endl;
    printf(">>\n");

    printf("\n*** Turn off right most contiguous strings ***\n");
    std::cout << "                                 d before bit: " << std::bitset<8>(before) << std::endl;
    std::cout << "        Turn off right most contiguous string: " << std::bitset<8>(turn_off_right_most_continguous_strings(before)) << std::endl;

    return 0;
}
