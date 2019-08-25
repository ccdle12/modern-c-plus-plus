#include <iostream>

using std::cout; using std::endl;

class MyType {
  public:
    MyType(int some_val) : open_var{some_val}, some_val_{some_val}{}
    void Print() const {
      cout << "Some val: " << some_val_ << endl;
    }

    // A public member variable open to being changed.
    int open_var;

  private:
    int some_val_;
};

int main() {
  MyType var(10);
  MyType var_2(20);

  // TIP: Read from right to left.
  // 1. A pointer to a constant. (This is the most commonly used)
  // 2/ A constant pointer.

  // *** Points to a constant var.
  // const <Type>* = CANNOT CHANGE THE UNDERLYING VALUE and CANNOT call non 
  // const functions.
  const MyType* const_var_ptr = &var;
  const_var_ptr->Print();

  const_var_ptr = &var_2;
  const_var_ptr->Print();

  // *** Constant Pointer.
  // <Type>* const = CANNOT REASSIGN POINTER but CAN change state in a class.
  MyType* const var_const_ptr = &var;
  // var_const_ptr = &var_2;
  var_const_ptr->open_var = 100;

  cout << "Open Var after change: " << var_const_ptr->open_var << endl;

  return 0;
}
