#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key){  // i=0     arr[i] == key       i<n         i++    return i
    for(int i=0; i<n; i++){                  //  0        2 == 10           0<8         0++
        if(arr[i] == key){                   //  1        4 == 10           1<8         1++
            return i;                        //  2        6 == 10           2<8         2++
        }                                    //  3        8 == 10           3<8         3++
    }                                        //  4       10 == 10            -           -       4 Ans...
    return -1;
}

int main(){
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);
    cout <<"Value of n: " <<  n << endl;
    cout << linearSearch(arr, n , 10) << endl; // arr[], n, key = 10 passed as argument to function linearSearch().
    cout << linearSearch(arr, n , 16) << endl;
    return 0;
}

/*
OUTPUT:
PS C:\Users\Yash Khartode\Desktop\DSA C++\1_array> g++ 5_linear_search.cpp ; ./a.exe
Value of n: 8
4
7
*/

/*
Time Complexity: Relation between input size (array size) and number of oprations.
--> array of n = 5 will perform 5 operations means TC increasing linearly.
    TC = O(n) --> TC increase 'n' number of time.
*/