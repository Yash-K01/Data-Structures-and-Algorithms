#include <iostream>
using namespace std;

int main(){
    int arr[25] = {3, 4, 5, 7, 8};
    int n = sizeof(arr) / sizeof(int);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // input array
    int m;
    cout << "Enter length of array: ";
    cin >> m;
    int arr2[m];  // This is Dynamically input of array size from user at runtime.
    for(int i=0; i<m; i++){
        cout << "Enter a value " << i << " : ";
        cin >> arr2[i];
    }
    for(int i=0; i<m; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}

/*
OUTPUT:
PS C:\Users\Yash Khartode\Desktop\DSA C++\1_array> g++ 2_input_output_array.cpp ; ./a.exe
3 4 5 7 8 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
Enter length of array: 5
Enter a value 0 : 2
Enter a value 1 : 6
Enter a value 2 : 5
Enter a value 3 : 8
Enter a value 4 : 3
2 6 5 8 3 
*/