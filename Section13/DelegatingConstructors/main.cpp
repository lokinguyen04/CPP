//
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    std::string name;
    int health;
    int xp;
public:
// overloaded constructor
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);

};
Player::Player()
    : Player{"None", 0, 0} 
{
    cout << "No-args constructor" << endl;
}

Player::Player(std::string name_val)
    : Player{name_val, 0, 0}
{
    cout << "One-args constructor" << endl;
}

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "Three-args constructor" << endl;
}

int main(){
    Player empty;
    Player Loki{"Loki"};
    Player Loki2{"Loki2", 100, 55};

    return 0;
}