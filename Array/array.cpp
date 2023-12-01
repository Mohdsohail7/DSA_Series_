#include <iostream>
using namespace std;

// C++ Array Declaration syntax
// dataType arrayName[arraySize];
// for example
// int x[6];


// Access Elements in C++ Array
// syntax to access array elements
// array[index];

// C++ Array Initialization
// declare and initialize and array
// int x[6] = {19, 10, 8, 17, 9, 15};

// Another method to initialize array during declaration:
// declare and initialize an array
// int x[] = {19, 10, 8, 17, 9, 15};

// C++ Array With Empty Members
// store only 3 elements in the array
// int x[6] = {19, 10, 8};

//Example 1: Displaying Array Elements

// int main(){
//     // declaration and initialization 
//     int numbers[5] = {2,3,5,6,7};

//     // display of array Or print array element

//     // print the elemnt basis on index
//     cout << numbers[2] << endl;

//     // for all elements
//     for(int i = 0; i <= 5;  i++){
//         cout << numbers[i] << " ";
//     }

// }


// Example 2: Take Inputs from User and Store Them in an Array

// int main(){
//     int marks[5];
//     cout << "Enter your Students marks " << endl;
//     for(int i = 0; i < 5; i++){
//         cin >> marks[i];
//     }

//     // print array elemnts here
//     for(int i = 0; i < 5; i++){
//         cout << marks[i] << " ";
//     }
// }

// find the sum of all array elemnts
int main(){
    int size;
    cin >> size;
    int arr[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }

    cout << "Sum is " << sum << endl;
}