#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ofstream myFile;
    string Str;

    myFile.open("example.txt");
    cout << "Enter Prompt: ";
    getline(cin, Str);

    ofstream outFile(Str);
    outFile << Str << endl;
    outFile.close();

    myFile << Str << endl;
    myFile.close();
    cout << "Stored Successfully!";

    return 0;
}