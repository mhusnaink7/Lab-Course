#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int age, creditHours, feePerCreditHour;

    // Take input from user
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter credit hours: ";
    cin >> creditHours;

    cout << "Enter fee per credit hour: ";
    cin >> feePerCreditHour;

    // Calculate total fee
    int totalFee = creditHours * feePerCreditHour;

    // Calculate fee after discount
    int finalFee = totalFee - 2000;

    // Calculate birth year
    int birthYear = 2026 - age;

    // Calculate year when student turns 25
    int year25 = birthYear + 25;

    // Display results
    cout << "Total Fee: " << totalFee << "\n";
    cout << "Fee After Discount: " << finalFee << "\n";
    cout << "Year of Birth: " << birthYear << "\n";
    cout << "Year Turning 25: " << year25 << "\n";

    return 0;
}