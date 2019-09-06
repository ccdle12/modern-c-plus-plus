#include <iostream>
#include <vector>

int main()
{
    std::string foo = "foo";
    std::string bar = "bar";
    std::vector<std::string> vec;
    
    std::cout << "Before copy and move foo: " << foo << std::endl;
    std::cout << "Before copy and move bar: " << bar << std::endl;

    vec.push_back(foo);
    vec.push_back(std::move(bar));

    std::cout << "-----------------------------" << bar << std::endl;
    for (const std::string &item : vec)
    {
        std::cout << "Items in vector: " << item << std::endl;
    }
    std::cout << "-----------------------------" << bar << std::endl;

    std::cout << "After copy and move foo: " << foo << std::endl;
    std::cout << "After copy and move bar: " << bar << std::endl;
}
