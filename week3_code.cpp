#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>
using namespace std;

//program running now
int main() {
    srand(time(0));         // seeding the number generator
    
    bool debug = true;       //turn this to false before shipping
   
    if(debug) cout << "DEBUG MODE IS ON\n";

    cout << "This is the start of week 3's lecture on \n";
    cout << "\tVariables and Logic!\n";
    
    if(true) {
        cout << "This line of code will always run\n";
    } //end of if(true)

    if(false) {
        cout << "This line of code will never run\n";
    } //end of if(false)

    if (1+1 == 2) {
        cout << "Thank goodness! Math still makes sense.\n";
    } //end of if(1+1)

    if (2+2 == 6) {
        cout << "This is bad science.\n";
    } //end of if(2+2)

    // let's talk about variables
    // intergers, floats, doubles, characters, strings, booleans
    
    // an interger is a whole number, positive or negative, between -2bil, and 2bil

    // when creating a variable, specify type, name, and optionally value. (always assign a value)
    // we are creating a new variable of the type "int", with name "playerscore",
    // with a value of 4550
    int playerScore = 4550;

    // declaring the variable, type int, name = playerTwoScore;
    int playerTwoScore = 0;
    // constant variables cannot change their value and must be defined at creation 
    const float EARTH_GRAVITY = -9.81f;         // acceleration in meters/second

    cout << "Player 1 score = " << playerScore << ".\n";
    cout << "Player 2 score = " << playerTwoScore << ".\n";
    cout << "Earth's gravity is " << EARTH_GRAVITY << "meters/second.\n";

    // a float is a floating point number accurate to 7 digits.
    // that means 9,999,999 or 0.0000001

    // a double is a double precision floating point number
    // a double is accurate to 22 digits.
    // 9,999.999,999,999,999,999,999,999
    // we are creating a constant variable of the type double
    // named PI, with the value of 3.1415926535897932385
    const double PI = 3.1415926535897932385;

    // a character is a single unicode blah blah blah. one key on your keyboard
    char answer = 'n';

    cout << "Would you like to keep playing?\n";    //ask the user a question  
    cin >> answer;                                  //get input from the player

    if (answer == 'y') {                            //test the input
        cout << "Hurray! Let's go again.\n";        //print text
    }
    else {                                          //if the test was false, do this
        cout << "Thanks for playing!\n";            // print text
        return 0;                                   //quit the program early
    }

    //strings are an array of characters, in an ordered list, one after the other.
    string profName = "Dumbledore";
    string user = "BMO";
    string pass = "videogames";
    string input = "";                  // this will store the users text input

    cout << "What is your username?\n";
    cin >> input;                           //for example input = "BMO"

    if (input == "BMO") {
        cout << "What is your password?\n";
        cin >> input;

        if(input == pass) {
            cout << "Hello Bmo! Professor " << profName << " has a question for you.\n";
            return 0;
        }  
        else {
            cout << "Wrong password. Nice try, Jake!\n";
        }  
    }
    else {
        cout << "Username not recognized.\n";
    }


    // booleans are a variable type that can only be true or false. yes/no, on/off, etc.
    bool playerIsAlive = true;
    int score = 0;                      //this will keep track of the players score
   
   if(debug) cout << "score = " << score << ".n/";

    //this is the simplest of loops
    //it runs as long as test it true
    // while(test) {codeblock}

    while (playerIsAlive) {
        string input;

        //score = score +5;
        score += 5;         //combined assignment operator
                            //this adds 5 to the value of score
       
        cout << "Are you dead yet?\n";
        cin >> input;
    
        //build an if statement
        // if player says "yes"
        // make playerIsAlive = false;

        if (input == "yes") {
            playerIsAlive = false;      //this will make the loop stop
            


        }


    }

    cout << "Welcome to valhalla!\n";

    cout << "Your scorrrreeee is " << score << ".\n";

    //lets talk about random. 10 minutes is enough time 

    // at the top of your source file
    //#include <cstdlib>
    //#include <ctime>          //for time()
    
    cout << "Here is a random number: " << rand() << ".\n";

    cout << "here are ten random numbers:\n";
    int count = 0;
    while (count < 10) {
        count += 1;
        cout << (rand() % 10) + 1 << "\n";
        }
        
        
    } // this is the end of main()