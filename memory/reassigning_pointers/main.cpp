#include <iostream>

using std::cout; using std::endl;

struct A {
  int data = 10;
};

int main() {
  A a;
  A a_other;

  // init pointer to nullptr.
  A* a_ptr = nullptr;
  cout << a_ptr << endl;

  // Reassign pointer to address of a.
  a_ptr = &a;
  cout << a_ptr->data << endl;

  // Reassign pointer to address of a_other.
  a_ptr = &a_other;
  a_ptr->data = 20;

  cout << a_ptr->data << endl;

  return 0;
}
