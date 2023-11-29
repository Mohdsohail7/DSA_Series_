#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Please enter your age " << endl;
    cin >> age;
    // if statement
    if (age >= 18)
    {
        cout << "You are Eligible for vote" << endl;
    }
    
    // if else statement
    if (age >= 18)
    {
        cout << "You are Eligible for vote" << endl;
    }
    else{
        cout << "You are not Eligible for vote" << endl;
    }

    // if else if statement
    int a,b;

    cout << "Enter a and b value " << endl;
    cin >> a >> b;

    if (a > b)
    {
        cout << "A is greater then B " << a << endl;
    }
    else if(a < b){
        cout << "B is greater then A " << b << endl;
    }
    else{
        cout << "Both are equal" << endl;
    }
    
}