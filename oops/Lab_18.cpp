#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream outfile("result.txt"); // Added .txt extension
    outfile << "nidhi" << endl;
    outfile << "marks: " << endl;
    outfile << "450" << endl;
    outfile.close();

    ifstream infile("result.txt"); // Added .txt extension
    char name[40], name1[40], name2[40];
    infile >> name;
    infile >> name1;
    infile >> name2;
    cout << "Name of the student is: " << name << endl;
    cout <<"Student "<< name1;
    cout << name2 << endl;
    infile.close();

    return 0; // Added return statement
}
