// convert EUR to USD

#include <iostream>

using namespace std;

int main(){
    const double usd_per_eur{1.07};

    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR: ";

    double euros{0.0};
    double usd{0.0};

    cin >> euros;
    usd = euros * usd_per_eur;

    cout << euros << " euros is equivalent to " << usd << " dollars" << endl;
    cout << endl;
    return 0;
}