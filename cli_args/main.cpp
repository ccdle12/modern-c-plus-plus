#include <stdio.h>
#include <iostream>

int main(int argc, char* argv[])
{
    printf("Number of args: %d\n", argc);
    std::cout << "Arg 1: " << argv[0] << std::endl;
    std::cout << "Arg 2: " << argv[1] << std::endl;
    std::cout << "Arg 3: " << argv[2] << std::endl;
}
