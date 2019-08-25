#include <iostream>

using std::cout; using std::endl;

class Printable {
  public:
    // virtual = allows function to be overriden.
    // const = does not mutate internal state.
    // = 0; zero implementation.
    virtual void Print() const = 0;
};

class Some {
  public:
    virtual void SomeThing() const = 0;
};


class Rectangle : public Printable, public Some {
  public:
    Rectangle(const int w, const int h): width_{w}, height_{h} {}
    int width() const { return width_; }
    int height() const { return height_; }
    void Print() const override {
      std::cout << "Rectangle: " << width_ << " " << height_ << std::endl;
    }
    void SomeThing const override {
      std::cout << "Prints Second Interface: " << width_ << " " << height_ << std::endl;
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
    void SomeThing const override {
      std::cout << "Prints Second Interface: " << width_ << " " << height_ << std::endl;
    }
};

void DoSqr(Square sqr) {
  int width = sqr.width(); 
  std::cout << "width: " << width << std::endl;
}

void Print(const Printable& shape) { shape.Print(); }

int main() {
  Square sq(10);
  sq.Print();
  
  const Rectangle& rect_ref = sq;
  rect_ref.Print();

  Rectangle conc_rect(10, 10);
  conc_rect.Print();

  // Here we can use the Print function as it references the Printable Interface.
  Print(sq);
  Print(rect_ref);
  Print(conc_rect);

  return 0;
}
