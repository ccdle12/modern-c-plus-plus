#include <iostream>
#include <stdio.h>

uint8_t* get_byte_array()
{
    static uint8_t byte_arr [2] = {0x0B, 0x01};

    return byte_arr;
}

class A 
{
    public:
        uint8_t byte_arr_[2];
        char char_arr_[2];

        A() {
           byte_arr_[0] = 0xB;
           byte_arr_[1] = 0x1;

           char_arr_[0] = 'a';
           char_arr_[1] = 'b';
        }

        uint8_t* get_byte_array() {
            return byte_arr_;
        }

        char* get_char_array() {
            return char_arr_;
        }
};

int main()
{
    // 1. Print out uint8_t as number.
    // 2. Print out uint8_t as hex.
    // 3. Print out uint8_t as binary.
    // 4. Create array of uint8_t.
    // 5. Print uint8_t.
    // 6. Create function that return uint8_t array.
    // 7. Create class that returns uint8_t array.
    
    uint8_t eleven = 0x0B;
    printf("eleven number: %d\n", eleven);
    printf("eleven hex: %X\n", eleven);
    std::cout << "eleven binary: " << std::bitset<8>(eleven) << std::endl;

    uint8_t byte_arr [2] = {0xB, 0x1};
    for (int i = 0; i < 2; i++) 
    {
        printf("byte array[%d] hex: %X\n", i, byte_arr[i]);
    }
    for (int i = 0; i < 2; i++) 
    {
        printf("byte array[%d] number: %d\n", i, byte_arr[i]);
    }

    uint8_t* b_arr = get_byte_array();
    for (int i = 0; i < 2; i++) 
    {
        printf("from function call byte array[%d] hex: %X\n", i, b_arr[i]);
    }

    A a = A();
    uint8_t* b_arr_class = a.get_byte_array();
    for (int i = 0; i < 2; i++)
    {
    
        printf("from CLASS byte array[%d] hex: %X\n", i, b_arr_class[i]);
    }

    char* char_arr_class = a.get_char_array();
    for (int i = 0; i < 2; i++)
    {
    
        printf("from CLASS char array[%d] char: %c\n", i, char_arr_class[i]);
    }

    std::cout << "size of uint8_t should be 1 byte: " << sizeof(eleven) << std::endl;
    uint16_t t = 0x0B12;
    std::cout << "size of uint16_t should be 2 byte: " << sizeof(t) << std::endl;
    std::cout << "size of byte_arr: " << sizeof(byte_arr) / sizeof(byte_arr[0]) << std::endl;

    return 0;
}
