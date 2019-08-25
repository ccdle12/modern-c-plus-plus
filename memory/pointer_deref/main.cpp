#include <iostream>

using std::cout; using std::endl;
int main() {
  // type* = declaring a pointer
  // value* = dereferencing a value.
  int a = 42;
  
  int* a_ptr = &a;

  // b derefences the value from the *a_ptr. Think of it as "copying" the value
  // to b. B has no "link" to a in memory.
  int b = *a_ptr;

  cout << "a = " << a << " b = " << b << endl;
  *a_ptr = 13;
  cout << "a = " << a << " b = " << b << endl;

  return 0;
}
