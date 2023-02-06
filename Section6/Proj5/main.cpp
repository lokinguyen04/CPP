// Constants

/**
 * Franks's Carpet Cleaning Service
 * Charges $30 per room
 * Sales tax rate is 6%
 * Estimate are valid for 30 days
 * 
 * prompt the user for the number of rooms they would like cleaned
 * and provide an estimate such as:
 * 
 * Estimate for carpet cleaning service:
 * Number of rooms: 2
 * Price per room: $30
 * Cost: $60
 * tax: $3.6
 * ===========================================
 * total estimate: $63.6
 * this estimate is valid for 30 days
 * 
 * Pseudo code:
 * prompt the user to enter the number of rooms
 * display number of rooms
 * display price per room
 * 
 * display cost: (number of rooms * price per room)
 * display tax: number of rooms * price per room * tax rate
 * display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
 * display estimate expiration time 
 *  
 * 
*/

#include <iostream>

using namespace std;

int main(){
    cout << "Hello, welcome to Frank's Carpet Service" << endl;
    cout << "\nHow many rooms would you like cleaned? ";

    int number_of_rooms{0};
    cin >> number_of_rooms;

    const double price_per_room {32.5};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; //days 

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of room: " << number_of_rooms << endl;
    cout << "Price per room: $" << price_per_room << endl;
    cout << "Cost: $" << price_per_room * number_of_rooms << endl;
    cout << "Tax: $" << price_per_room * number_of_rooms  * sales_tax << endl;
    cout << "===========================================" << endl;
    cout << "Total estimate: $" << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
    cout << endl;
    return 0;
}