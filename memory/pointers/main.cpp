#include <iostream>

class MyClass {
  public:
    void MyFunc() {
      std::cout << "My func is called" << std::endl;
    }
};

int main() {
  
  MyClass obj;
  obj.MyFunc();

  // Points to the objects memory.
  MyClass* object_ptr = &obj;
  
  // Calling class functions via a pointer needs "->".
  object_ptr->MyFunc();

  return 0;
}
