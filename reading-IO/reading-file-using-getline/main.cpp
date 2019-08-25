#include <iostream>
#include <fstream> // For file streams.
#include <string>

using namespace std;

int main() {
    string line, file_name;

    ifstream input("test_bel.txt", ios_base::in);

    // Reads each line and assigns to line variable.
    while(getline(input, line)) {
      cout << "Read: " << line << endl;

      string::size_type loc = line.find("filename", 0);
      if (loc != string::npos) {
        file_name = line.substr(line.find("=", 0) + 1, string::npos);
      } 
    }

    cout << "Filename found: " << file_name << endl;
    return 0;
}
