//23070123115
//Sara Kanyal
//Arithmetic Operators
#include <iostream>
using namespace std ;
int main() {
    int a, b, sum1, difference1, multiply1, divide1 , modulus1, inc1, dec1,inc2, dec2; 
    cout<< "Enter a number 1:";
    cin>> a;
    cout<< "Enter a number 2:";
    cin>> b;
    sum1 = a + b ;
    difference1= a-b ;
    multiply1= a*b;
    divide1=a/b;
    modulus1 =a%b ;
    inc1=++a;
    inc2=++b;
    dec1=--a;
    dec2=--b;
    cout << "The sum of " << a << " and " << b << " is " << sum1 <<endl;
    cout << "The difference of" << a << " and " << b << " is " << difference1 << endl;
    cout << "The multiplication of " << a << " and " << b << " is " << multiply1 <<endl;
    cout << "The division of " << a << " and " << b << " is " << divide1 <<endl;
    cout << "The modulus of " << a << " and " << b << " is " << modulus1 <<endl;
    cout << "The increment of " << a << " is " << inc1 <<endl;
    cout << "The increment of " << b << " is " << inc2 <<endl;
    cout << "The decrement of " << a << " is " << dec1 <<endl;
    cout << "The decrement of " << b << " is " << dec2 <<endl;
    return 0;
}
