// Accessing Class Members

#include <iostream>
#include <string>

using namespace std;

class Player{
public:
    // attributes
    string name{"player"};
    int health{100};
    int xp{3};
    // methods
    void talk(string text){
        cout << name << " says " << text << endl;
    };
    bool is_dead();
};

class Account{
public:
    // attributes
    string name{"Account"};
    double balance{0.0};
    // methods
    void deposit(double bal){
        balance += bal;
        cout << "In deposit " << balance << endl;
    };
    void withdraw(double bal){
        balance -= bal;
        cout << "In withdraw " << balance << endl;

    };
};

int main(){
    Account loki_account;
    loki_account.name = "Loki's Account";
    loki_account.balance = 5000.0;

    loki_account.deposit(1000.0);
    loki_account.withdraw(500.0);

    Player loki;
    loki.name = "Trong";
    loki.health = 100;
    loki.xp = 12;
    loki.talk("Hello World");

    Player *enemy = new Player;
    (*enemy).name = "enemy";
    (*enemy).health = 120;
    enemy->xp = 17;

    enemy->talk("I will destroy you");
}