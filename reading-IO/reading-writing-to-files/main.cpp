#include <iostream>

using std::string;
using Mode = std::ios_base::openmode;

int main() {
 // NOTE: Usually just use ofstream and ifstream.
 
 // ifstream: stream for input from a file.
 std::ifstream f_in(string& file_name, Mode mode);

 // ofstream: stream for output to file.
 std::ofstream f_out(string& file_name, Mode mode);

 // fstream: input and output stream to file.
 std::fstream f_in_out(string& file_name, Mode mode);

 return 0;
}
