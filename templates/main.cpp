#include <iostream>

// Fundamental types should use typename.
// For a user generated class, should use <class T>
template <typename T>
T DummyFunction() {
  T result;

  std::cout << "T: " << result << std::endl;
  return result;
}

template<class T>
class MyClass {
  public:
    MyClass(const T& smth) : smth_(smth) {}
  private:
    T smth_;
};

int main() {
    DummyFunction<int>();
    DummyFunction<double>();

    MyClass<int> my_obj(10);
    MyClass<double> my_double_obj(10.0);

    return 0;
}
