// week 8 recap
// how to run this:
// go to terminal
// say "ls"
// say "g++ (file name) -o (file name)"
// say "./(filename)" after u fix bugs.

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    bool debug = true;
    cout << "Hello World!\n";

    
    // ask the player if they prefer cheese or pepperoni pizza.
    // use an if, else if, and else to check their input
    // have the computer agree or disagree with their choice or berate them for any other option
    cout << "What's your favorite pizza topping - cheese or pepperoni?\n";
    string input = "";
    getline(cin, input);
    
    // use an if, else if, and else to check their input
    // have the computer agree or disagree with their choice, or berate them for any other option
    if (input == "Cheese") {
        cout << "That's my favorite topping too!\n";
    }
    else if(input == "Pepperoni") {
        cout << "Pepperoni is okay.\n";
    }
    else if (input == "Sausage") {
        cout << "uhmm.. okay.... coool....\n";
    }
    else        cout << "UGH! How could you like " << input << "?!?!?! Gross!!\n\n";


    // build a guess number game
    // have the computer choose a random number between 1 and 18
    // start a while loop
    // ask the player to guess the number
    // if the number is too high, have the computer say "lower"
    // if the number is too low, have the computer say "higher!"
    // if the number is correct , tell the player, and end the loop
    // dont forget
    // #include <stdlib>
    // #include <time>
    // in main(), strand(time(0))

    int theNumber = rand() % 10 + 1;
    while (true) {
        cout << "What is your guess?\n";
        getline(cin, input);

        if(input == "quit") {
            cout << "oh, leaving already? See you again, I hope.\n";
            break;
        }
        if (stoi(input) == theNumber) {
            cout << "Yep! That's the number! You guessed it!\n";
        }

        if (stoi(input) > theNumber) {
            cout << "Lower!\n";
        }
        else {
            cout << "Higher!\n";
        }
    }
    
   return 0;
    }