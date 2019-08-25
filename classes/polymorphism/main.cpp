#include <iostream>

using std::cout; using std::endl;
class Rectangle {
  public:
    Rectangle(const int w, const int h): width_{w}, height_{h} {}
    int width() const { return width_; }
    int height() const { return height_; }
    virtual void Print() const {
      std::cout << "Rectangle: " << width_ << " " << height_ << std::endl;
    }

  protected: 
    const int width_ = 0;
    const int height_ = 0;
};

class Square : public Rectangle {
  public:
    explicit Square(int size) : Rectangle{size, size} {}
    void Print() const override {
      std::cout << "Square: " << width_ << " " << height_ << std::endl;
    }
};

void DoSqr(Square sqr) {
  int width = sqr.width(); 
  std::cout << "width: " << width << std::endl;
}

// void Print(const Rectangle& rect) { rect.Print(); }

int main() {
  Square sq(10);
  sq.Print();
  
  const Rectangle& rect_ref = sq;
  rect_ref.Print();

  Rectangle conc_rect(10, 10);
  conc_rect.Print();

  // Print(rect_ref);

  return 0;
}
