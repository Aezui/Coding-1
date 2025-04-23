#include <string>
#include "filegmt.h"
#include <iostream>         // for in out stream
#include <fstream>          // for file stream          // alternative, use ifstream for reading
using namespace std;                                    // use ofstream for writing

void ReadFromFile() {
    string fileContents; 

ifstream file("file.txt");

while(getline(file, fileContents)) {
    cout << fileContents;
}

file.close();

}

void WriteToFile() {
    // opening the "file.txt file" if it doesn't exist, create it.
    ofstream file("file.txt");

    // write a line to the file... well, to the buffer of the open file
    file << "Play Ocarina of Time!\n";

    // close the file ( saves to disk )
    file.close();
}

void WriteArrayToFile(string* arr, int size) {

    ofstream file("favs.txt");

    if (!file.is_open()) {
        return;
    }

    for(int i = 0; i < size; i++) {
        file << arr[i] << "\n";
    }

    file.close();
}