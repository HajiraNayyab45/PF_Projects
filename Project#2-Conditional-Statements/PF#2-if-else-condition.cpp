#include <iostream>
using namespace std;

int main() {
    int num;

    // Ask the user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // If-Else condition to check if the number is positive or negative
    if (num > 0) {
        cout << "The number is positive." << endl;
    } 
    else {
        cout << "The number is negative." << endl;
    }

    return 0;
}
