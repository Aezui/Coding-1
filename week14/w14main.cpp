

#include <iostream>
#include "filegmt.h"
#include "item.h"
using namespace std;

int main() {
    cout << "Play Ocarina of Time.\n";

    ReadFromFile();       // If needed for your project
    WriteToFile();        // If needed for your project

    string favs[100];
    int nextIndex = 0;

    cout << "Type out your favorites, or type 'done' to stop.\n";
    while (true) {
        string input;
        cout << ">> ";
        getline(cin, input);

        if (input == "done") {
            break;
        }
        favs[nextIndex] = input;
        nextIndex++;
    }
    WriteArrayToFile(favs, nextIndex);

    // ✅ New: Create and display 5 items
    Item itemArray[5] = {
        Item("Apple", 1),
        Item("HairBrush", 2),
        Item("SodaCan", 3),
        Item("Bottle", 4),
        Item("Phone", 5)
    };

    cout << "\nItems in inventory:\n";
    for (int i = 0; i < 5; ++i) {
        itemArray[i].examine();
    }

    return 0;
}
