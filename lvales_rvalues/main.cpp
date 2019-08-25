#include <iostream>
#include <string>

class Printer {
  public:
    void Print(const std::string& msg) {
      some_str = msg;
      std::cout << "lvalue: " << msg << std::endl;
    }

    void Print(std::string&& msg) {
      some_str = std::move(msg);
      std::cout << "rvalue after move, its empty because we have already moved it: " << msg << std::endl;    
      std::cout << "moved variable into some_str: " << some_str << std::endl;
    }

  private:
    std::string some_str;
};

int main() {
  std::string hello = "hi";
  Printer printer;

  // lvalue is passed.
  printer.Print(hello);

  // rvalue is passed. Ownership is changed to the function?
  printer.Print("hello");

  // Move, moves the "hello" memory from an lvalue to an rvalue. 
  // NOTE: MOVE changes ownership of the variable.
  printer.Print(std::move(hello));

  return 0;
}
