// Section8 - challenge
/*

    write a program that asks the user to enter the following:
    an integer representing the number of cents

    you may assume that the number of cents entered is greater than or equal to zero

    the program should then display how to provide that change to the user 

    in the US:
        1 dollar is 100 cents
        1 quarter is 25 cents
        1 dime is 10 cents
        1 nickel is 5 cents, and
        1 penny is 1 cents.

    here is a sample run:

    enter the amount of cents: 92

    you can provide this change as follows:
    dollars: 0
    quarters: 3
    dimes: 1
    nickels: 1
    pennies: 2

    

*/

#include <iostream>

using namespace std;

int main(){
    // define conversion values in cents
    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickel_value{5};

    int change_amount{};

    

    cout << "Enter an amount in cents: ";
    cin >> change_amount;

    int balance{}, dollars{}, quarters{}, dimes{}, nickel{}, pennies{};

    // solution 1 - not using modulo operator
    // dollars = change_amount / dollar_value;
    // balance = change_amount - (dollars * dollar_value);

    // quarters = balance / quarter_value;
    // balance -= quarters * quarter_value;

    // dimes = balance / dime_value;
    // balance -= dimes * dime_value;

    // nickel = balance / nickel_value;
    // balance -= nickel * nickel_value;

    // pennies = balance;

    // solution 2 - using modulo operator
    balance = dollars = quarters = dimes = nickel = pennies = 0; // reset everything to zero

    dollars = change_amount / dollar_value;
    balance = change_amount % dollar_value;

    quarters = balance / quarter_value;
    balance %= quarter_value;

    dimes = balance / dime_value;
    balance %= dime_value;

    nickel = balance / nickel_value;
    balance %= nickel_value;

    pennies = balance;

    cout << "\nYou can provide this change as follows: " << endl;
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickel: " << nickel << endl;
    cout << "pennies: " << pennies << endl;

    return 0;
}