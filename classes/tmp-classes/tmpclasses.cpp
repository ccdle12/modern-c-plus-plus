#include <iostream>
using std::cout;
using std::endl;

class Blah {
  public:
    void SomeFunc() { cout << "non const" << endl; }

    // Cannot change anything in the object if there is const after the function
    // declaration.
    // If this is commented out, this will fail, since a const function is required.
    void SomeFunc() const { cout << "is a const" << endl; }
};

int main() {
  Blah blah;
  blah.SomeFunc();

  // The overloaded SomeFunc const will be called.
  const Blah& blah_ref = blah;
  blah_ref.SomeFunc();

  return 0;
}
