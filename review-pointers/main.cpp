#include <iostream>

int main() {
    int i = 10;
    int& h = i;
    std::cout << "h: " << h << std::endl;

    int* j = &i;
    std::cout << "j: " << j << std::endl;

    return 0;
}
