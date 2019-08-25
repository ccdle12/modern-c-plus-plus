#include <map>
#include <iostream>
#include <unordered_map>

int main() {
  // Map stores as a TREE.
  // Logarithm access.
  std::map<int, bool> m;

  m.emplace(1, true);
  m[2] = false;
  std::cout << m.at(2) << std::endl;

  // Maps can be iterated because they are ordered in a red/black tree.
  for (const auto& kv : m) {
    const auto& key = kv.first;
    const auto& value = kv.second;

    std::cout << "Key/Value pair: " << key << " " << value << std::endl;
  } 


  std::cout << "Size: " << m.size() << std::endl;

  // unordered_map.
  std::unordered_map<int, bool> u;

  u.emplace(1, true);
  u[2] = false;
  std::cout << u.at(2) << std::endl;


  std::cout << "Size: " << u.size() << std::endl;


  return 0;
}
