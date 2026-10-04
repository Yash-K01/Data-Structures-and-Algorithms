#include <iostream>
using namespace std;

int main(){
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    int max = arr[0];
    int min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
            cout << "Assigning val " << arr[i] << " to max\n"; // For Dry run purpose
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "Largest = " << max << endl;
    cout << "Smallest = " << min << endl;
    return 0;
}

/*
OUTPUT:
PS C:\Users\Yash Khartode\Desktop\DSA C++\1_array> g++ 3_largest_in_array.cpp ; ./a.exe
Assigning val 9 to max
Largest = 9
Smallest = 2
*/