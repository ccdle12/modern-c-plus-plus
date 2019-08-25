#include <memory>
#include <iostream>

class A {
  public:
    A(int a) { std::cout << "I'm alive!\n"; }
    ~A() { std::cout << "I'm dead... \n"; }
};

int main(){
  // Shared Pointers can be copied.
  // Each copy increments a ptr counter.
  // Whent he counter reaches 0,
  // the memory is released.
  // NOTE: try to avoid using new or delete in any place.
  auto a_ptr = std::make_shared<A>(10);
  std::cout << "Should only be 1 count: " << a_ptr.use_count() << std::endl;
  {
    std::shared_ptr<A> b_ptr = a_ptr;
    std::cout << "Setting b_ptr to a_ptr should be 2: " << a_ptr.use_count() << std::endl;
  }
  std::cout << "Back to main scope\n";
  std::cout << "b_ptr was dropped in inner scope, should be 1: " << a_ptr.use_count() << std::endl;

  return 0;
}
