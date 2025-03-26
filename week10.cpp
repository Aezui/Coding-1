// first task - create an array with three names
// use a loop to display all of the names
// compile and run this program to finish
#include <iostream>
#include <string>
using namespace std;

int currentShirtSizeElement= 0;
string professor = "Brian";

// declaring and defining a new function
// the function must be delcared before it is used.
// the function CAN be defined later in the code
// this function returns nothing.
// this function's name is "sayHello()"
void sayHello() {
    cout << "Hello!\n";
}

void sayGoobye() {
    cout << "Goodbye!\n";
}
// overload the add function
// this one adds two floats
// don't forget to call this function()
void add(int number1, int number2) {
    //cout << "The sum of number1 and number2 is ";
    cout << "The sum of " << number1 << " and " << number2 << " is ";
    cout << number1 + number2 << endl;
}

void add(float firstNum, float secondNum) {
    cout << firstNum << " plus " << secondNum << " equals ";
    cout << firstNum + secondNum << endl;
}

// break your brain before the break
// overload add() to accept two strings
// using concatenation!

void add(string firstWord, string secondWord) {
    cout << firstWord << "plus " << secondWord << "equals";
    cout << firstWord + secondWord << endl;
}





bool askYN(string question = "y/n?") {
    // in a do-while loop
    // ask the user the question
    // get input from player
    // if y, return true
    // if n, return false
    // else, loop again

do {
    cout << question << endl;
    string input;
    getline(cin, input);

    if (input == "y") {
        return true;
    }
    else if (input == "n") {
        return false;
    }
    else {
            cout << "Please type 'y' or 'n'\n";
     }



} while(true);

     }

    void show(string* array, int arraySize) {
        cout << "Here are the contents of your array:\n";
        for (int i = 0; i < arraySize; i++) {
            cout << array[i] << endl;
        }
    }


    void addShirtSize(string* array) {
        string input;
        while(true) {
            if (currentShirtSizeElement > 10) {
                cout << "That is all the shirt sizes we can support.\n";
                break;
            }
            cout << "Please add a shirt size to the array.\n";
            cout << "or type 'done' to stop.\n";
        getline(cin, input);

        if (input == "done") {
            break;
        }

        array[currentShirtSizeElement++] = input;
        }
        
    }

    // in class assingment
    // 1. add a while loop to addshirtsize() that let's the user add sizes
    // until they say done or they fill up the array



int main() {
    string shirtSizes[10];
    //int currentSize = 0;
    addShirtSize(shirtSizes);
    show(shirtSizes, currentShirtSizeElement);
    string playerName = "brian";

    // calling the sayHello function
    sayHello();
    add(23, 2);
    add(22.2f, 23.5f);
    add("two", "four");
    string names [3];

    if (askYN("Do you like pizza?")) {
        cout << "Let's get some pizza for lunch!\n";
    }
    else {
        cout << "I would not care to know you.\n";
    }

    names[0] = "Inosuke";
    names[1] = "Zenitsu";
    names[2] = "Tanjiro";
    show(names,3);
    int counter = 0;
    while (counter < 3) {
        cout << names[counter++] << endl;
    }

    for (int i = 0; i < 3; i++) {
        cout << names[i] << endl;
    }
    
    sayGoobye();
}



