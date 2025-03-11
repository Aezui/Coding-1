// loops and lists

#include <iostream>
#include <string>

using namespace std;

int main(){
// we are going to build an array
// an array is an ordered list of a single type of variable

//create an array of intergers with a [size of 10].

const int MAX_SIZE = 10;        //this variable cannot be changed after this line
                                // we use ALL_CAPS for constant variable names


int element = 0;                 // this keeps track of where in the array we are.

int scores[MAX_SIZE];           // this array has just created 10 spots for intergers

// add a value for the first element in the array
scores[0] = 9001;

//display the value to confirm that it works
cout << "the highest socre in score is " << scores[0] << ".\n";

// add 3 more scores using element++ to keep track of where you are in the list

element = 1; 
scores[element++] = 682;
scores[element++] = 684;
scores[element++] = 412;

cout << "the second score is " << scores[1] << ".\n";

//print all the scores
    // use a while loop to run through all of the scores
    // the loop is done when the loop counter is equal to the element

    int counter = 0;
    while(counter < element) {
        
        cout << scores[counter] << "\n";
        counter++; 
    }
// create an array of strings named bestfriends
//use a while loop to ask the user to add names, or quit.
// at the end, we will use a for loop, to display all of the names

// create an array of string variables, you MUST specify a size, we'll pick 20
string bestFriends[20];
int friendCount = 0;

string input;

do {
    cout << "We're making a list of best friends, who would you like to add?\n";
    cout << "or type 'quit' to quit.\n";
    getline(cin, input);

    if (input == "quit") {
        cout << "Thanks for adding names to the list!\n";
        break;
    }

    if (friendCount >= 19) {
        cout << "Oh no, that's all the friends that we can have.\n";
        break;
    }

    bestFriends[friendCount++] = input;

    //them add your functionality.

} while (true);

cout << "Here is a list of your best friends:\n";

// a for loop runs "for a certain amount of times"
// a for loop includes the counter, the test, and the increment action all on the same line
    // all on the same line
// a standard for loop looks like this: 
// for(setup; test; action) {code}
for(int i = 0; i <friendCount; i++) {
    cout << i + 1 << ".\t";
    cout << bestFriends[i] << "\n";
}
for (int i = 0; i < friendCount; i++) {
    cout << i + 1 << ""
}
}

/* psuedocode for FavGames assignment

    setup:
    int gameCount = 0;
    string games[size];
    start loop

    0. greet player and ask for input
    1. add
        ask the player "what name they want to add"
        get input
        add that name to the array and increment
            game count
    (optional) tell player what name they've added
    2. edit
    3. remove
    4. show
    5. quit 
        break; to get out of the loop
        tell the player when u break : "Shutting down the program"

*/






