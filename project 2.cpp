#include <iostream>
using namespace std;

int main()
{
    // Wrong calculation
    cout << "Average: " << 60 + 70 + 80 / 3 << endl;

    // Correct calculation using brackets
    cout << "Average: " << (60 + 70 + 80) / 3 << endl;

    // Syntax error: Code breaks C++ rules and compiler catches it.
    // Semantic error: Code runs but gives the wrong answer.

    return 0;
}