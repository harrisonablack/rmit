#include <iostream>
#include "task.h"

using std::cin;
using std::cout;

int main() {
    int num1, num2;

    cin >> num1;
    cin >> num2;

    cout << "Before:\n";
    cout << "Num 1: " << num1 << "\n";
    cout << "Num 2: " << num2 << "\n";

    swapValues(&num1, &num2);

    cout << "After:\n";
    cout << "Num 1: " << num1 << "\n";
    cout << "Num 2: " << num2 << "\n";

    return EXIT_SUCCESS;
}
