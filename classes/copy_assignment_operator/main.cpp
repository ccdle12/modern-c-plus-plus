#include <algorithm>
#include <vector>

using namespace std;

class Human {
  public:
    Human(int kindness) : kindness_{kindness} {}

    // const after function will meant that it cannot change the internal state
    // of the member variables of the class.
    bool operator <(const Human& other) const {
      return kindness_ < other.kindness_;
    }

  private:
    int kindness_ = 100;
};

int main() {
  vector<Human> humans = {Human{0}, Human{10}};

  // Sorts because we have implemented the < operator.
  std::sort(humans.begin(), humans.end());


  // COPY IS SLOW!
  Human a {10}; // Calling the implemented constructor.
  Human b(a); // Calling copy constructor.
  Human c = a; // Calling copy constructor.
  a = b; // Calling copy assignment operator.

  return 0;
}
