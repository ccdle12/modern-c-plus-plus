#include <iostream>
#include <vector>

using std::cout; using std::endl;

class AbstractShape {
  public:
    virtual void Print() const = 0;
};

class Square : public AbstractShape {
  public:
    void Print() const override { cout << "Square" << endl; }
};

class Triangle : public AbstractShape {
  public:
    void Print() const override { cout << "Triangle" << endl; }
};

int main() {
  // Create a vector of AbstractShape pointers.
  std::vector<AbstractShape*> shapes;

  Square square;
  Triangle triangle;

  shapes.push_back(&square);
  shapes.push_back(&triangle);

  for (const AbstractShape* shape : shapes) { shape->Print(); }
  return 0;
}
