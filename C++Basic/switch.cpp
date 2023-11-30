#include<iostream>
using namespace std;


// creating a simple calculator using switch statement
int main(){
    char expression;
    float num1, num2;

    cout << "Enter an operator (+, -, *, /): "<< endl;
    cin >> expression;
    cout << "Enter Two Numbers : "<< endl;
    cin >> num1 >> num2;

    switch(expression){
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;
        default:
            cout << "Error! The operator is not correct"<< endl;
            break;

    }

}