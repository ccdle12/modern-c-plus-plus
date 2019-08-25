#include <memory>
#include <iostream>

struct A {
  int a = 10;
};

int main(){
    // Unique Pointer has NO copy constructor.
    // Cannot be copied but can be moved.
    // Guarantees memory is ONLY owned by a single unique pointer.
    // Because of the guarantee we can ONLY MOVE variable.
    auto a_ptr = std::unique_ptr<A>(new A);
    std::cout << a_ptr->a << std::endl;

    auto b_ptr = std::move(a_ptr);
    std::cout << b_ptr->a << std::endl;

  return 0;
}
