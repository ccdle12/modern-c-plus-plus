#include <iostream>

#define MAKE_MESSAGE(type) \
/* deleter */\
struct type##_deleter {\
  void operator()(struct type* ob) {\
    type##_hello_world();\
  }\
};\


int main()
{

}
