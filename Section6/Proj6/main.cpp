//  Challenge
// Constants

/**
 * Franks's Carpet Cleaning Service
 * Charges:
 * $25 per small room
 * $35 per large room
 * Sales tax rate is 6%
 * Estimate are valid for 30 days
 * 
 * prompt the user for the number of rooms they would like cleaned
 * and provide an estimate such as:
 * 
 * Estimate for carpet cleaning service:
 * Number of small rooms: 3
 * Number of large rooms: 1
 * Price per small room: $25
 * Price per large room: $35
 * Cost: $110
 * tax: $6.6
 * ===========================================
 * total estimate: $116.6
 * this estimate is valid for 30 days
 * 
 * Pseudo code:
 * prompt the user to enter the number of rooms
 * display number of small room
 * display number of large room
 * 
 * display price per small room
 * display price per large room
 * 
 * display cost: (number of small rooms * price per small room) + (number of large rooms * price per large room)
 * display tax: (number of small rooms * price per small room * tax rate) + (number of large rooms * price per large room * tax rate)
 * display total estimate: total cost + total tax
 * display estimate expiration time 
 *  
 * 
*/

#include <iostream>

using namespace std;

int main(){
    cout << "Hello, welcome to Frank's Carpet Service" << endl;
    cout << "\nHow many small rooms would you like cleaned? ";

    int number_of_small_rooms{0};
    cin >> number_of_small_rooms;

    cout << "How many large rooms would you like cleaned? ";

    int number_of_large_rooms{0};
    cin >> number_of_large_rooms;

    const double price_per_small_room {25};
    const double price_per_large_room {35};

    const double sales_tax {0.06};
    const int estimate_expiry {30}; //days

    double total_cost = (price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms);
    double total_tax = ((price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms)) * sales_tax;

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;

    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per small room: $" << price_per_large_room << endl;
    cout << "Cost: $" << total_cost << endl;
    cout << "Tax: $" << total_tax << endl;
    cout << "===========================================" << endl;
    cout << "Total estimate: $" << total_cost + total_tax << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
    cout << endl;
    return 0;
}