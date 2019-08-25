#include <iostream>
#include <thread>
#include <unistd.h>

using namespace std;

void function_1() {
  std::cout << "Beauty is only skin-deep" << std::endl;
}

int main() {
  std::thread t1(function_1);

  // t1.join(); // main thread waits for t1 to finish.
  //
  // Once detached, always detached.
  t1.detach(); // t1 will freely run on its own -- daemon process.


  usleep(2000);

  // Checks whether the thread is joinable, preventing a crash.
  if (t1.joinable())
  {
    t1.join();
  }

  return 0;
}
