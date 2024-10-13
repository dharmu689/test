#include <iostream>
#include <fstream>  // for file handling
using namespace std;

int main() {
    ifstream file;
    
    // Attempt to open a non-existent file
    file.open("non_existent_file.txt");

    // Check if the file opened successfully
    if (!file) {
        cerr << "Error: File could not be opened. It may not exist." << endl;
    } else {
        cout << "File opened successfully." << endl;
        // Proceed with file operations (if file exists)
        file.close();
    }

    return 0;
}
