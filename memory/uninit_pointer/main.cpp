#include <iostream>

using std::cout; using std::endl;
int main() {
    int* i_ptr; // BAD!!! NEVER LEAVE A POINTER UNINITIALIZED!
    cout << "ptr address: " << i_ptr << endl;
    cout << "value under ptr: " << *i_ptr << endl;

    // nullptr will always set the address to 0.
    i_ptr = nullptr;
    cout << "new ptr address: " << i_ptr << endl;
    cout << "ptr size: " << sizeof(i_ptr) << " bytes" << endl;
    cout << " (" << sizeof(i_ptr) * 8 << "bit) " << endl;
    return 0;
}
