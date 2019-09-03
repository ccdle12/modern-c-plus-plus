#include <stdio.h>
#include <string>

std::string print_hello()
{
    static int count = 0;
    ++count;
    printf("count: %d\n", count);

    return "Hello";
}

int main() 
{
    for (int i = 0; i < 10; ++i)
    {
        print_hello();
    } 

    return 0;
}
