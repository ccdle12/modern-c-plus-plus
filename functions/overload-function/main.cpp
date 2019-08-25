#include <iostream>

using namespace std;

int Sum(int a, int b = 10);
int Sum(int a, int b, int c);

int main() {
  int a = Sum(1, 2);
  int b = Sum(1, 2, 3);
  int c = Sum(1);

  cout << "A: " << a << endl;
  cout << "B: " << b << endl;
  cout << "C: " << c << endl;

  return 0;
}

int Sum(int a, int b) {
  return a + b;
}

int Sum(int a, int b, int c) {
  return a + b + c;
}
