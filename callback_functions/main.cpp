#include <iostream>

void a()
{
    std::cout << "I am function a()" << std::endl;
}

void b(void (*cb) ())
{
    (*cb) (); // executes the callback function.
}
int main()
{
    void (*cb) () = &a; // A pointer to a non-executed function.
    b(cb);
}
