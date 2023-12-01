#include<iostream>
using namespace std;

int factorial(int n){
    if(n > 1){
        return n * factorial(n-1);
    }
    else {
        return 1;
    }
}

int main(){
    int n;
    cout << "Enter your No "<< endl;
    cin >> n;

    int result = factorial(n);
    cout << "Factorial is " << result << endl;
}