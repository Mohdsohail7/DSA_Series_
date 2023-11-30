#include <iostream>
using namespace std;

int main(){
    // continue with for loop
    // for(int i = 1 ; i <= 5; i++){
    //     if(i == 3){
    //         continue;
    //     }
    //     cout << i <<" ";
    // }

    // //  continue with while loop
    // int i = 1;
    // while(i <= 5){
    //     if(i == 3){
    //         continue;
    //     }
    //     cout << i << " ";
    //     i++;
    // }

    int number;
    int sum = 0;

    // nested for loops

    // first loop
    for (int i = 1; i <= 3; i++) {
        // second loop
        for (int j = 1; j <= 3; j++) {
            if (j == 2) {
                continue;
            }
            cout << "i = " << i << ", j = " << j << endl;
        }
    }
}