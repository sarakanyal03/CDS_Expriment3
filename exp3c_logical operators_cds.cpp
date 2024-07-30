//23070123115
//logical operators
#include <iostream>
using namespace std ;
int main() {
    int a, b;
    cout<< "Enter a number 1:";
    cin>> a;
    cout<< "Enter a number 2:";
    cin>> b;
    if ((a == b) && (a >= 0))
     {
        cout << "numbers are equal and non-negative." << endl;
    }
    if ((a < b) || (a < 0)) {
        cout << "number1 is less than the number2 or number1 is negative." << endl;
    }
    if (!(a == b)) {
        cout << "The numbers are not equal." << endl;
    }

    return 0;
}