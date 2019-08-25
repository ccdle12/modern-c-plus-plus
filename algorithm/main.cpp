#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  std::vector<int> v;

  for (int i = 10; i >= 1; i--) {
    v.push_back(i);
  }

  for (int i : v) 
    std::cout << "each i: " << i << std::endl;

  // Sorting the vector.
  std::sort(v.begin(), v.end());

  for (int i : v) 
    std::cout << "after sort each i: " << i << std::endl;

  return 0;
}
