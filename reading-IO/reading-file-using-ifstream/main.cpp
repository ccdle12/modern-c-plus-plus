#include <iostream>
#include <fstream>
#include <string>

using namespace std;

using std::string;
using Mode = std::ios_base::openmode;

int main() {
    int i;
    double a,b;
    string s;

    // Create an input file stream.
    ifstream in("test_cols.txt", ios_base::in);

    // read the data until it is completely read.
    while (in >> i >> a >> s >> b) {
      cerr << i << ", " << a << ", "
          << s << ", " << b << endl;
    }

    return 0;
}
