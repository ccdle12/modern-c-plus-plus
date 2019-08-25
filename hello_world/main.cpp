#include <iostream>
#include <vector>
#include <string>

using namespace std;

int add(const int a, const int b) {
  return a + b;
}

int main() {
  cout << "Hello, World!" << endl;

  vector<int> vec = {1, 2};
  vec.push_back(4);
  cout << "Fist: " << vec.front() << "\nLast: " << vec.back() << endl;

  vec[0] = 10;

  cout << "After replacing 0 index: " << vec.front() << endl;

  // C++ defensive programming. Anything that shouldn't change, set it to const.
  const int someVar = 1;
  int mutVar = 2;
  int new_mut_var = 3;

  // Create a reference to new_mut_var.
  int& new_mut_var_ref = new_mut_var;

  // Updating the value at new_mut_var_ref, this will also update the value at
  // new_mut_var.
  new_mut_var_ref = 4;

  cout << "Printing ref of mut var: " << new_mut_var_ref << endl;
  cout << "Printing val of new_mut_var: " << new_mut_var << endl;

  // Const references are useful since we can create references that ARE NOT MUTABLE.
  const int& immutable_ref = new_mut_var_ref;
  // This won't work since we created an immutable reference.
  // immutable_ref = 23;

  // Modern Loop.
  for (const auto& n : vec) {
    cout << "Immutable n: " << n << endl;
  }

  // Modern Loop over String.
  vector<string> hello_vec = {"Hello", "World"};
  for (const char& c : hello_vec.front())
      cout << "Each char: " << c << endl;

  // Function call.
  int result = add(3, 4);
  cout << "Result: " << result << endl;

  // 0 means no errors. Anything above 0 will always be an error.
  return 0;
}
