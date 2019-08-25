#include <iostream>

int main() {

  int* int_ptr = nullptr;

  // Allocate memory on the heap for an int using "new".
  int_ptr = new int;

  // Delete frees the memory according to the pointer.
  delete int_ptr;

  // Also works for arrays.
  float* float_ptr = nullptr;
  float_ptr = new float[0];
  delete[] float_ptr;

  return 0;
}
