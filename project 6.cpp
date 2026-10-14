#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int price, quantity, total, tax, grandTotal;

    // Take input from user
    cout << "Enter price: ";
    cin >> price;

    cout << "Enter quantity: ";
    cin >> quantity;

    // Calculate total
    total = price * quantity;

    // Calculate 5% tax
    tax = total * 5 / 100;

    // Calculate grand total
    grandTotal = total + tax;

    // Display bill
    cout << "Total: " << total << "\n";
    cout << "Tax: " << tax << "\n";
    cout << "Grand Total: " << grandTotal << "\n";

    return 0;
}