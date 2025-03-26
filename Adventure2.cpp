#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Global variables
int health = 100;
int totalTreasure = 0;

void Story() {
    cout << "Welcome to the Treasure Adventure!" << endl;
    cout << "You are an adventurer seeking treasure in a dangerous land." << endl;
}

bool AskYesNo(string question) {
    char response;
    cout << question << " (y/n): ";
    cin >> response;
    return (response == 'y' || response == 'Y');
}

int RollDie(int sides = 6) {
    return rand() % sides + 1;
}

void Ending() {
    cout << "Your adventure has come to an end." << endl;
    if (health <= 0) {
        cout << "You have perished on your quest. Total treasure collected: " << totalTreasure << "" << endl;
    } else {
        cout << "You survived with " << health << " health and " << totalTreasure << " treasure!" << endl;
    }
}

void Adventure() {
    int attack = RollDie(12);
    int block = RollDie(12);
    int treasure = RollDie(20);

    cout << "An enemy attacks with a force of " << attack << "!" << endl;
    cout << "You attempt to block with a strength of " << block << "!" << endl;

    if (block >= attack) {
        cout << "You successfully block the attack and find " << treasure << " gold!" << endl;
        totalTreasure += treasure;
    } else {
        cout << "The attack hits! You lose " << attack << " health." << endl;
        health -= attack;
    }

    cout << "Current health: " << health << " | Total treasure: " << totalTreasure << "" << endl;
}

int main() {
    srand(time(0));

    Story();

    while (health > 0 && AskYesNo("Would you like to go adventuring?")) {
        Adventure();
    }

    Ending();

    return 0;
}
