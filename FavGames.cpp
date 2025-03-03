// FavGames.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
   
    std::string nameGame;
    std::string games2[5];


  
    std::string games[6];
    games[0] = "Valorant";
    games[1] = "Overwatch 2";
    games[2] = "Marvel Rivals";
    games[3] = "Stardew Valley";
    games[4] = "Avatar:Frontiers of Pandora";
        std::cout << "Name of game" << std::endl;
        std::cin >> nameGame;
        games[5] = nameGame;
        int y = 0;
        while (y < 6) {

            std::cout << games[y] << std::endl;
            y++;
        }
        std::cout << "" << std::endl;
        std::cout << "Gamechanged:" << std::endl;
    games[5] = "blackops6";
     y = 0;
    while (y < 6) {

        std::cout << games[y] << std::endl;
        y++;
    }
    int z = 0;
    while (z < 5) {
        games2[z] = games[z];
        z++;
    }
    std::cout<<"" << std::endl;
        int x = 0;
        std::cout << "Final list: " << std::endl;
    while(x < 6) {
       
        std::cout << games2[x] << std::endl;
        x++;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
