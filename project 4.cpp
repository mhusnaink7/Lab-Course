#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize variables
    int rollNo = 1045;
    int semester = 1;
    char section = 'B';
    double cgpa = 3.5;
    int totalFee = 45000;
    int feePaid = 20000;

    // Display student information
    cout << "Roll No: " << rollNo << "\n";
    cout << "Semester: " << semester << "\n";
    cout << "Section: " << section << "\n";
    cout << "CGPA: " << cgpa << "\n";
    cout << "Total Fee: " << totalFee << "\n";
    cout << "Fee Paid: " << feePaid << "\n";

    // Move student to next semester
    semester = semester + 1;

    // Add second installment
    feePaid = feePaid + 5000;

    // Calculate remaining fee and percentage
    int remainingFee = totalFee - feePaid;
    int percentage = feePaid * 100 / totalFee;

    // Display updated information
    cout << "Semester: " << semester << "\n";
    cout << "Fee Paid: " << feePaid << "\n";
    cout << "Remaining Fee: " << remainingFee << "\n";
    cout << "Percentage Paid: " << percentage << "\n";


    return 0;
}