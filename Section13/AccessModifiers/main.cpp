#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    // attribute
    string name{"Player"};
    int health;
    int xp;
public:
    // methods
    void talk(string text){cout << name << " says " << text << endl;}
    bool is_dead();
};

int main(){
    Player loki;
    // loki.name = "loki";
    // cout << loki.health << endl;
    loki.talk("Hello world");
    return 0;
}