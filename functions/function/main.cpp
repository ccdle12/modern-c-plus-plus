#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> Square(int size);
void pass_ref(const string& val);

int main() {
    vector<int> res = Square(10);

    for (const int square : res)
        cout << "Each square: " << square << endl;

    string some_message = "1804uc908123juf0213948u-013924ujx230-191";
    cout << "Memory of val before passing: " << &some_message << endl;
    pass_ref(some_message);
}

vector<int> Square(int size) {
    // Initialise a vector of size.
    vector<int> result(size);

    // Square and assign i to the vector.
    for (int i = 0; i < size; i++) 
        result[i] = i * i;

    return result;
}

void pass_ref(const string& val) {
    cout << "Memory of val after passing: " << &val << endl;
    cout << "Message Val: " << val << endl;
}
