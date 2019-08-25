#include <iostream>
#include <fstream>
#include <iomanip> // For setprecision

using namespace std;

int main() {
    string filename = "out.txt";

    // Creates the output file.
    ofstream outfile(filename);

    if ( !outfile.is_open() ) { return EXIT_FAILURE; }

    double a = 1.12321421;
    outfile << "Just string" << endl;
    outfile << setprecision(20) << a << endl;

    return 0;
}
