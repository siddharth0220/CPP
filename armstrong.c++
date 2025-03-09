#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int number, sum = 0, temp, remainder, n = 0;
    cout << "Enter an integer: ";
    cin >> number;
    temp = number;
    while (temp != 0) {
        temp /= 10;
        ++n;
    }
    temp = number;
    while (temp != 0) {
        remainder = temp % 10;
        sum +=floor(pow(remainder, n));
        temp /= 10;
    }
    if (sum == number) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    return 0;
}
