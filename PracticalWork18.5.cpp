// PracticalWork18.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>

class PlayerPoints
{ 
public:
    std::string name;
    int points;
};

bool compare(PlayerPoints& player1, PlayerPoints& player2)
{
    return player1.points > player2.points;
}

int main()
{   
    int PlayersNumber;
    std::cout << "How many players do you want? ";
    std::cin >> PlayersNumber;
    
    PlayerPoints* players = new PlayerPoints[PlayersNumber];
    for (int i = 0; i < PlayersNumber; i++)
    {
        std::cout << "Put player's name: " << i + 1 << ") ";
        std::cin >> players[i].name;
        std::cout << "Put points for this player: " << i + 1 << ") ";
        std::cin >> players[i].points;
    }

    std::sort(players, players + PlayersNumber, compare);
    std::cout << "Here we got the list of winners with all data sorted: " << "\n";
    for (int i = 0; i < PlayersNumber; i++)
    {
        std::cout << players[i].name << " " << players[i].points << "\n";
    }
    delete[] players;

    return 0;
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
