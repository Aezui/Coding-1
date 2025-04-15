

#include <iostream>
#include <string>
using namespace std;

class robot {
    private:
    string name;
    string phrase;
    int charge = 10;
    int maxCharge = 100;
    int minCharge = 0;
    
    public:
    robot(string, string, int);
    robot();
    void sayHello();


    void setCharge(int givenCharge) {
        if(givenCharge < 0) {
            charge = 0;
        } else if (charge > 100) {
            charge = 100;
        } else {
            charge = givenCharge;
        }
    }
    void ChangeCharge(int by = -1) {
        charge += by;
        SetCharge(charge);
    }
    int GetCharge() {
        return charge;
    }

    void SetName(string givenName) {
        if (givenName.size() < 2) {
            cout << "Name is too short!\n";
            return;
        }
        else if(givenName.size() > 20) {
            cout << "Name is too long!\n.";
            return;
        }
        else {
            name = givenName;
        }
    }
    string GetName() {
        return name;
    }

protected:
};


    robot(string givenName, string givenPhrase, int givenCharge) {
        
        name = givenName;
        phrase = givenPhrase;
        charge = givenCharge;
        
        
        cout << "A new robot has been constructed!\n";
    }

    robot() {
        cout << "Using the DEFAULT constructor.\n";
        cout << "Hey Programmer Dean, please fix this in the source code.\n";
    }

    void sayHello() {
        cout << "My name is " << name << " and my charse is " << charge << ".\n";
        cout << phrase << "\n";
    }


int main() {
    cout << "Classes, yeah?\n";

    robot bobert;
    bobert.SetName("Bobert Jr.");
    bobert.SetCharge(5);

    cout << "Have a look at my new robot! Their name is " << bobert.GetName() << ".\n";
    cout << "I am currently charging them, their charge is " << bobert.GetCharge() << ".\n";

    bobert.ChangeCharge(50);
    cout << "two hours later, bobert's charge is now " << bobert.GetCharge() << ".\n";

    robot rob("Roberto", "I can fix anything!", 25);
    cout << "My new robot was very expensive! They works on the nuclear reactor.\n";
    cout << "They can introduce themselves, watch!\n";
    rob.ChangeCharge(-200);
    rob.sayHello();

    bobert.sayHello();




    return 0;
}