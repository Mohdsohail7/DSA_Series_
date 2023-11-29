#include <iostream>
using namespace std;

int main(){
    // braek statement using for loop
    // for(int i = 1; i <= 10; i++){  
    //     // check kro condition if condition its true then break statement terminate the loop
    //     if(i == 5){
    //         break;
    //     }
    //     cout << i << endl;
    // }

    // break statement using while loop
    int i = 1;
    while(i < 5){
        if(i == 3){
            break;
        }
        cout << i << endl;
        i++;
    }

    // break with Nested loop
    int number;
    int sum = 0;

    // nested for loops

    // first loop
    for (int i = 1; i <= 3; i++) {
        // second loop
        for (int j = 1; j <= 3; j++) {
            if (i == 2) {
                break;
            }
            cout << "i = " << i << ", j = " << j << endl;
        }
    }

}