#include <iostream>
#include <vector>
#include <memory>

using std::cout; using std::unique_ptr;

struct AbstractShape {
  virtual void Print() const = 0;
};

struct Square : public AbstractShape {
  void Print() const override { cout << "Square\n"; }
};

struct Triangle : public AbstractShape {
  void Print() const override { cout << "Triangle\n"; }
};

int main() {
  // Two ways to add unique pointers of abstract shapes.
  std::vector<unique_ptr<AbstractShape>> shapes;
  // 1. Emplace back will see that it is a square we are passing and will
  // automatically create the constructor for a unique_pointer.
  shapes.emplace_back(new Square);


  // 2. We need move Triangle since it is a unique pointer and cannot be copied.
  // We are moving the ownership of the triangle to the shapes vector.
  auto triangle = unique_ptr<Triangle>(new Triangle);
  shapes.emplace_back(std::move(triangle));

  for (const auto& shape : shapes) { shape->Print(); }

}
