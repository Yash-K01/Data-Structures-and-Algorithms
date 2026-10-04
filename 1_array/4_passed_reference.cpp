#include <iostream>
using namespace std;

void func(int arr[]){ // OR we can take as a '*arr' same meaning comes out.
    arr[0] = 1000;
}

void printArr(int nums[], int n){       //--> Here the array is passed by reference so it not makes the copy of array it points to actual array location.
//  n = sizeof(nums) / sizeof(int);     --> If we Try to create size of array it will return a sizeof ARRAY POINTER which is = 8.
    for(int i=0; i<n; i++){             //--> Our actual array size 20 and 20/4 = 5 size of array elemets comes out.
        cout << "Element: " << nums[i] << endl;
    }
}

int main(){
    int arr[] = {10, 9, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << *arr << endl;  // This is arr[0]
    cout << *(arr+1) << endl; // arr[1]
    cout << *(arr+2) << endl; // arr[2]

    func(arr);  // Passing array name is eq. to passing the Pointer in func().
    cout << arr[0] << endl;

    printArr(arr, n); //--> For this while passing array as argument we have to pass 'n' also with it to calculate actual array elements.
    return 0;
}

/* 
OUTPUT:
PS C:\Users\Yash Khartode\Desktop\DSA C++\1_array> g++ 4_passed_reference.cpp ; ./a.exe
10
9
3
1000
Element: 1000
Element: 9
Element: 3
Element: 4
Element: 5
*/

/*
Arrays are passed by reference:
1. arr[]; --> This 'arr' name is consider as the Pointer.
           It Points the 0th index of array.
2. Array always passed to function it passed by reference.
3. void printArr(int arr[]){...} && void printArr(int *arr){...} ---> Both syntax meaning is same.
*/