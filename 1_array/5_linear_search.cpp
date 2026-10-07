#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);
    cout << linearSearch(arr, n , 10) << endl;
    cout << linearSearch(arr, n , 16) << endl;
    return 0;
}

/*
OUTPUT:
PS C:\Users\Yash Khartode\Desktop\DSA C++\1_array> g++ 5_linear_search.cpp ; ./a.exe      
4
7
*/

/*
Time Complexity: Relation between input size (array size) and number of oprations.
--> array of n = 5 will perform 5 operations means TC increasing linearly.
    TC = O(n) --> TC increase 'n' number of time.
*/