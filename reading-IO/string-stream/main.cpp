#include <iomanip>
#include <iostream>
#include <sstream>

using namespace std;

int main() {
  stringstream s_out;
  string ext = ".txt", file_name = "";

  for (int i = 0; i < 500; ++i) {
    // Combine variables into stringstream.
    // setw(5) set width as 5.
    // setfill('0') fille it with 0s.
    // Assign i to the end.
    // Assign the extension.
    s_out << setw(5) << setfill('0') << i << ext;


    // Assign the s_out stream string to file_name. 
    file_name = s_out.str();

    s_out.str(""); // Empty the stream for the next iteration.

    // Print out the filename.
    cerr << file_name << endl;
  }

  // Read the filename as a string stream.
  stringstream s_in(file_name);

  // Assign the variables from the string stream to i and rest.
  int i; string rest;
  s_in >> i >> rest;
  cerr << "Number: " << i << " rest is: " << rest;

  return 0;
}
