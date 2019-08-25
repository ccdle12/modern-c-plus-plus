#include <fstream> //for the file stream.
#include <vector>
#include <iostream>

using namespace std;

int main() {
    string file_name = "image.dat";

    // *** WRITING BYTES TO A FILE.
    // Create the output stream and say the output is binary.
    ofstream file(file_name,
                  ios_base::out | ios_base::binary);

    // Exit if the file doesn't exist.
    if (!file) { return EXIT_FAILURE; }

    // 2 * 3 rows and columns.
    int r = 2; int c =3;
    vector<float> vec(r * c, 42);

    // Write the row, reinterpret it as a char and write the size of r.
    file.write(reinterpret_cast<char*>(&r), sizeof(r));

    // Write the colum, reinterpret it as a char and write the size of r.
    file.write(reinterpret_cast<char*>(&c), sizeof(c));
    
    // Write the first element in the vector, reinterpret it as a char and write 
    // the size of vector by vec size * sizeof variable of vector.
    file.write(reinterpret_cast<char*>(&vec.front()), vec.size() * sizeof(vec.front()));
    

    // *** READING BYTES FROM A FILE.
    r = 0, c = 0;

    // Create input stream, expecting to read binary.
    ifstream in(file_name, ios_base::in | ios_base::binary);
    if (!in) { return EXIT_FAILURE; }
    
    // Read bytes of the size r into r.
    in.read(reinterpret_cast<char*>(&r), sizeof(r));
    in.read(reinterpret_cast<char*>(&c), sizeof(c));
    cout << "Dim: " << r << " x " << c << endl;

    // Fill with zeroes initially.
    vector<float> data(r * c, 0);

    in.read(reinterpret_cast<char*>(&data.front()), data.size() * sizeof(data.front()));
    for (float d : data) { cout << d << endl; }


    return 0;
}
