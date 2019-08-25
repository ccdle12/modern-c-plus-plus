#include <iostream>

using std::cout; using std::endl;
class Rectangle {
  public:
    Rectangle(const int w, const int h): width_{w}, height_{h} {}
    int width() const { return width_; }
    int height() const { return height_; }

  protected: 
    const int width_ = 0;
    const int height_ = 0;
};

class Square : public Rectangle {
  public:
    explicit Square(int size) : Rectangle{size, size} {}
};

void DoSqr(Square sqr) {
  int width = sqr.width(); 
  std::cout << "width: " << width << std::endl;
}

int main() {
  Square sq(10);
  cout << sq.width() << " " << sq.height() << endl;

  DoSqr(sq);
  // Without explicit, on constructor of Square, there will be an implicit conversion
  // using the int as the only param in the constructor.
  // DoSqr(42);

  return 0;
}
