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

int add(int a, int b){
    return (a + b);
}

int main(){
    int a, b;
    cout << "Enter value of a and b " << endl;
    cin >> a >> b;

    int result = add(a, b);
    cout << "Addition of Two number is " <<  result << endl;
}