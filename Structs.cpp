

#include <iostream>
#include <string>
using namespace std;

enum enemyType {GRUNT, MINIBOSS, BOSS};

struct enemy {
    
    int health = 10;
    int damage = 4;
    string name = "Enemy";
    enemyType type = GRUNT;
};

struct address {
    string streetName;
    int streetNumber;
    string city;
    string stateCode;
    int zipCode;
};
struct employee {
    int Id = 0;
    string name;
    int age;
    address addr;
    float wage;
};

string AddressOneLine(adresss addr) {
    string oneLine = "";
    oneLine += to_string(addr.streetNumber);
    oneLine += " " + addr.streetName;
    oneLine += ", " + addr.city;
    oneLine += ", " + addr.stateCode;
    oneLine += ", " + to_string(addr.zipCod);

    return oneLine;
}






int main() {
    cout << "Structures!\n";

    enemy avery;
    avery.health = 10;
    avery.damage = 4;
    avery.name = "Evil Avery";
    avery.type = GRUNT;

    cout << "Here's " << avery.name << "! Her health is " << avery.health << ".\n";
    
    enemy colin;
    colin.damage = 6;
    colin.name = "Skinny Colin";

    cout << colin.name << " is attacking " << avery.name << "!!\n";
    avery.health -= colin.damage;

    if(avery.health < 1) {
        cout << avery.name << " has been killed!\n";
    } else {
        cout << avery.name << " has " << avery.health << "health left!\n";
    }

    brad<enemy> enemies;

    enemies.push_back(avery);
    enemies.push_back(colin);

    cout << "status of all enemies:\n";
    for(int i = 0; i < enemies.size(); i++) {
        cout << enemies[i].name << " has " << enemies[i].health << " health.\n";
        cout << "Their damage is " << enemies[i].damage << " and their type is";
        switch (enemies[i].type)
        {
            case GRUNT:
            cout << "grunt";
            break;
            case MINIBOSS:
            cout << "mini-boss";
            break;
            case BOSS:
            cout << "boss";
            break;

            default:
            cout << "unknown";
            break;
        }
        cout << ".\n";
    }

    employee avery;
    avery.Id = 1234;
    avery.name = "Avery Sheldon";
    avery.age = 19;
    avery.wage = 7.25f;
    avery.addr.streetNumber = 6789;
    avery.adrr.streetName = "Main Street";
    avery.addr.city = "Wichita";
    avery.addr.stateCode = "KS";
    avery.addr.zipCode = 12345;

    cout << avery.name << " lives at " << AddressOneLine(avery.addr) << ".\n";

    return 0;
}
