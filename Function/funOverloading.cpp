#include<iostream>
using namespace std;


// Example 1: Overloading Using Different Types of Parameter

// int add(int a, int b){
//     return (a + b);
// }

// float add(float a, float b){
//     return (a + b);
// }

// int main(){
//     // calling the both functions here
//    cout<< "Addition with int value " << add(10, 10) << endl;
//    cout<< "Addition with float value " << (10.0f, 12.2f) << endl;
// }


// Example 2: Function Overloading Using Different Number of Parameters

// int add(int a, int b)
// {
//   return (a + b);
// }
 

// int add(int a, int b, int c)
// {
//     return (a + b + c);
// }

// int main(){
//     //Calling the both functions here 
//     cout << "Addition is " << add(10, 10) << endl;

//     cout << "Addition 3 value is " << add(10,10,10) << endl;
// }

// Example 3: Default Argument
int add(int a, int b, int c = 10, int d = 15){
    return (a + b + c + d);
}

int main(){
    cout << add(10, 20);
}