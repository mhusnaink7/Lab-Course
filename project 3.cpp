#include <iostream>
using namespace std;

int main()
{
    // Expression 1
    cout << "Expression 1: " << 10 + 5 * 2 << "\n";

    // Expression 2
    cout << "Expression 2: " << (10 + 5) * 2 << "\n";

    // Expression 3
    cout << "Expression 3: " << 20 - 5 - 3 << "\n";

    // Expression 4
    cout << "Expression 4: " << 100 / 7 << "\n";

    // Expression 5
    cout << "Expression 5: " << 100 % 7 << "\n";

    // Expression 6
    cout << "Expression 6: " << 2 * 3 + 8 / 4 - 1 << "\n";

    // Expression 3 is evaluated from left to right
    // 20 - 5 = 15, then 15 - 3 = 12

    // Expression 6 with brackets to get 8
    cout << "Expression 6 with brackets: "
        << 2 * (3 + 8 / 4 - 1) << "\n";

    return 0;
}

