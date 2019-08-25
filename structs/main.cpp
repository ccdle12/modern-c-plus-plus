#include <iostream>

// By Default has no functions and all vlaues are public.
// If a struct needs functions it should be a class.
struct NamedInt {
  int value;
  std::string name;
};

void PrintNamedInt(const NamedInt& n) {
 std::cout << n.name << " " << n.value << std::endl;
}

int main() {
    // Structs can be initalised easily using {}.
    // Structs can be used as tuple like structures.
    NamedInt var = {1, "hello"};
    PrintNamedInt(var);
    PrintNamedInt({3, "some int"});
  
    return 0;
}
