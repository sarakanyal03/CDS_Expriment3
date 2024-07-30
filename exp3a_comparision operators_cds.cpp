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

