#include <iostream>

using std::cout; using std::endl;

class Strategy {
  public:
    virtual void Print() const = 0;
};

class StrategyA: public Strategy {
  public:
      void Print() const override { cout << "A" << endl; }
};

class StrategyB: public Strategy {
  public:
      void Print() const override { cout << "B" << endl; }
};

class MyClass {
  public:
    MyClass(const Strategy& s): strategy_{s} {}
    void Print() const { strategy_.Print(); }

  private:
    // Here we use the Interface.
    const Strategy& strategy_;
};

int main() {
  MyClass(StrategyA()).Print();
  MyClass(StrategyB()).Print();
}
