#include <iostream>

using std::cout; using::std::endl;

struct Counted {
  Counted() { Counted::count++; }
  ~Counted() { Counted::count--; }
  static int count; // The static member variable.
};

int Counted::count = 0; // Definition.

int main() {
  // Each time a Counted struct is initialised, the constructor will increment
  // the static value count.
  Counted a, b;
  cout << "Count: " << Counted::count << endl;

  Counted c;
  cout << "Count: " << Counted::count << endl;

  return 0;
}
