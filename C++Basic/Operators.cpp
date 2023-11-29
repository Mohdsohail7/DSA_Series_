#include<iostream>
using namespace std;



int main(){
    // Assignment Operator(=)
    int num1 = 10;
    int num2 = 20;
    int num3 = num2;
    int result;


    cout << num1 <<endl;
    cout << num2 << endl;
    cout << num3 << endl;

    // Arithmetic operators(+, -, *, /, %)

    result = num1 + num2;
    cout << "Addition is "<< result << endl;

    result = num2 - num1;
    cout << "Subtraction is "<< result << endl;

    result = num1 * num2;
    cout << "Multiplication is "<< result << endl;

    result = num2 / num1;
    cout << "Division is "<< result << endl;

    result  = num2 % num1;
    cout << "Modulo is "<< result << endl;

    // Compound assignment (+=, -=, *=, /=, %=, >>=, <<=, &=, ^=, |=)
    num1 += 1;
    result = num1 + num2;
    cout << "After using compound operaton in num1 " << result << endl;

    // Increment and decrement (++, --) same way to use decrement
    num2++;
    //or
    num3 += 1;

    cout << num1 <<  endl;
    cout << num3 << endl;

    // Relational and comparison operators ( ==, !=, >, <, >=, <= )

    if(num1 == num2){
        cout << "num1 and num2 is equal" << endl;
    }
    else if (num1 > num2)
    {
        cout << "num1 is greater" << endl;
    }
    else if (num1 != num2)
    {
        cout << "num1 and num2 is not equal" << endl;
    }
    else {
        cout << "All  conditions are wrong" << endl;
    }

    // Logical operators ( !, &&, || )
    // && in and operator both are true then true
    cout << ((num1 == 10) && (num1 < num2)) << endl;

    // in || OR operator at least one true then true
    cout << ((num1 == 10) || (num1 < num2)) << endl;

    // in ! NOT operator give the inverts value like if value true then give false
    cout << (!(num1 == 11)) << endl;

    // Conditional ternary operator ( ? )

    // condition ? result1 : result2   syntax
    
    result = (num1 > num2) ? num1 : num2;
    cout << result << endl;








}