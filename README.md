## Expriment3

## AIM
To study and implement operators in C++. <br>

THEORY: <br>
In C++ programming language, operators are said to be special symbols used to perform operations on values or varibales. Their classification is based on the functions they perform. <br>

1) Arithmetic Operators : Used to perform arithmetic operations. <br>
i) '+' : Addition <br>
ii) '-' : Subtraction <br>
iii) '*' : Multiplication <br>
iv) '/' :Division <br>
v) '%' : Modulus (used to find remainder) <br>

2) Logical Operators: Used to perform logical operations <br>
i) '&&' : Logical AND <br>
ii) '||' : Logical OR <br>
iii) '!' : Logical NOT  <br>

3) Assignment Operators : Used to assign values to the variables.  <br>
i)  '=' : Assign <br>
ii)  '+=' : Add and assign <br>
iii)  '-=' : Subtract and assign <br>
iv)  '*=' : Multiply and assign <br>
v)  '/=' : Divide and assign <br>
vi)  '%=' : Modulus and assign <br>
vii)  '&=' : Bitwise AND and assign <br>
viii)  '|=' : Bitwise OR and assign <br>
ix)  '^=' : Bitwise XOR and assign <br>
x)  '<<=' : Left shift and assign <br>
xi)  '>>=' : Right shift and assign <br>
## CODE 
1. CODE A: <BR>
```
//23070123115
//Comparison Operators
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<< "Enter number 1:";
    cin>>a;
    cout<<"Enter number 2:";
    cin>>b;
    if (a==b){
        cout<<"Numbers are equal"<<endl;   
    }
    else{
        cout<< "Numbers are not equal"<<endl;
    }
    if (a!=b){
        cout<<"Numbers are different"<<endl;   
    }
    else{
        cout<< "Numbers are same"<<endl;
    }
    if (a>b){
        cout<<"Number1 is greater than number2 "<<endl;   
    }
    if (a<b){
        cout<<"Number1 is less than number2 " << endl;   
    }
    if (a>=b){
        cout<<"Number1 is greater than or equal to number2 " << endl;   
    }
    if (a<=b){
        cout<<"Number1 is less than or equal to number2 "<<endl;
    }
    return 0;
}
```
2. CODE B:<BR>
```
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
```
3. CODE C: <BR>
```
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
```

## OUTPUT
3a) :  <br>
![exp3a](https://github.com/sarakanyal03/CDS_Expriment3/blob/main/Screenshot%202024-07-31%20011317.png)
3b) :<br>
![exp3b](https://github.com/sarakanyal03/CDS_Expriment3/blob/main/Screenshot%202024-07-31%20011427.png)
3c) : <br>
![exp3c](https://github.com/sarakanyal03/CDS_Expriment3/blob/main/Screenshot%202024-07-31%20011541.png)

## CONCLUSION 
We learnt about arithmetic operators, logical operators and assignment operators function and their significance and working in programming language.



