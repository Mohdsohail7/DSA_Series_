#include<iostream>
using namespace std;

// C++ Function Declaration
// The syntax to declare a function is:

// returnType functionName (parameter1, parameter2,...) {
//     // function body   
// }

// example
// function declaration
// void greet() {
//     cout << "Hello World";
// }

// Calling a Function
// int main() {
     
//     // calling a function   
//     greet(); 

// }

// program to add two numbers using a function with parameter and returntype

// int add(int a, int b){
//     return (a + b);
// }


// find the power of two number
// int Power(int a, int b){
//     int ans = 1;
//     for(int i = 1; i<= b; i++){
//         ans = ans * a;

//     }
//     return ans;
// }

// fint the number is odd or even
bool odddEven(int n){
    if(n%2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    // int a, b;
    // cout << "Enter value of a and b " << endl;
    // cin >> a >> b;

    // int result = add(a, b);
    // cout << "Addition of Two number is " <<  result << endl;

    // int ans = Power(a ,b);
    // cout << "Power of Two number is " <<  ans << endl;

    int num;
    cout << "Enter your Number "<< endl;
    cin >> num;

    if(odddEven(num)){
        cout << "No is Even "<< endl;
    }
    else{
        cout << "No is Odd " << endl;
    }
    
}