#include <iostream>
#include <string>
using namespace std;

class Human {
private:
    string Name;
    int Health;
    int Damage;

public:

    Human(string name, int health, int baseDamage) {
        Name = name;
        Health = health;
        Damage = baseDamage;
    }

    void SayHello() {
        cout << "Hello, my name is " << Name << "!" << endl;
    }

    void SetHealth(int byAmount) {
        Health = byAmount;
    }

    void SetDamage(int givenDamage) {
        Damage = givenDamage;
    }

    int GetHealth() {
        return Health;
    }

    int GetDamage() {
        return Damage;
    }
};

// Main function to test the Human class
int main() {
    
    Human person("Avery", 10, 4);

    person.SayHello();
    cout << "Health: " << person.GetHealth() << endl;
    cout << "Damage: " << person.GetDamage() << endl;

    person.SetHealth(8);
    person.SetDamage(6);

    cout << "Updated Health: " << person.GetHealth() << endl;
    cout << "Updated Damage: " << person.GetDamage() << endl;

    return 0;
}
