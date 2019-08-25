#include <iostream>

// Prevents collision or renaming of common function names, for example
// "Print()" would be present in many different modules so we don't want
// them to clash.

namespace fun {
  int GetMeaningOfLife() { return 42; }
} // namespace fun

namespace boring {
  int GetMeaningOfLife() { return 0; }
} // namespace boring

namespace {
  const int localImportantInt = 13;
  const float localImportantFloat = 13.0f;
} // namespace

int main() {

    std::cout << "The answer to the meaning of life is not "
        << boring::GetMeaningOfLife() << " but " 
        << fun::GetMeaningOfLife() << std::endl;

    return 0;
}
