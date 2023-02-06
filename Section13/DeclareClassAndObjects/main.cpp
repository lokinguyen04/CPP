// Declare Classes and Objects
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
    // attributes
    string name{"player"};
    int health{100};
    int xp{3};
    // methods
    void talk(string);
    bool is_dead();
};

class Account{
    // attributes
    string name{"Account"};
    double balance{0.0};
    // methods
    bool deposit(double);
    bool withdraw(double);
};
int main(){
    Account loki_account;
    Account frank_account;

    Player Frank;
    Player hero;

    Player players[]{Frank, hero};

    vector<Player> player_vec{Frank};
    player_vec.push_back(hero);

    Player *enemy{nullptr};
    enemy = new Player;

    delete enemy;
    return 0;
}