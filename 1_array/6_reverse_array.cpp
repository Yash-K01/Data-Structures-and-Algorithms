#include <iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){       // i=0   arr[i]        i<n    i++
        cout << arr[i] << ",";    //  0     2            0<5    0++
    }                             //  1     2,9          1<5    1++
    cout << endl;                 //  2     2,9,3        2<5    2++
}                                 //  3     2,9,3,4      3<5    3++
                                  //  4     2,9,3,4,5    4<5    4++
                                  //  5     --------     5<5  Stop...

int main(){
              // 0  1  2  3  4
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int); // n = 20 / 4 --> 5

    int copyArr[n];           // copyArr[5] is created.
    for(int i=0; i<n; i++){   // i=0    j=n-i-1    copyArr[i] = arr[j]      i<n      i++
        int j = n-i-1;        //  0     5-0-1= 4        2                   0<5      0++
        copyArr[i] = arr[j];  //  1     5-1-1= 3        2,9                 1<5      1++
    }                         //  2     5-2-1= 2        2,9,3               2<5      2++
                              //  3     5-3-1= 1        2,9,3,4             3<5      3++
                              //  4     5-4-1= 0        2,9,3,4,5           4<5      4++
                              //  5     5-5-1= -1 Stop...

    for(int i=0; i<n; i++){   // i=0     arr[i] = copyArr[i]    i<n    i++
        arr[i] = copyArr[i];  //  0        2                    0<5    0++
    }                         //  1        2,9                  1<5    1++
                              //  2        2,9,3                2<5    2++
                              //  3        2,9,3,4              3<5    3++
                              //  4        2,9,3,4,5            4<5    4++
                              //  5        ---------            5<5 Stop...

    printArr(arr, n);

    // without extra space (2 Pointer Approach) SC = O(1) : TC = O(n)
    // Function: swap(arr[start], arr[end]); --> available in c++
    int start = 0, end = n-1;     // n = 5
    while(start < end){           // start < end   temp = arr[start]   arr[start] = arr[end]   arr[end] = temp   start++  end--
        // Swap                       0 < 4          arr[0] = 5          arr[4] = 2                   5           0++      4--
        int temp = arr[start];    //  1 < 3          arr[1] = 4          arr[3] = 9                   4           1++      3--
        arr[start] = arr[end];    //  2 < 2  Stop...
        arr[end] = temp;

        start++;
        end--;
    }
    return 0;
}

/*
OUTPUT:
PS C:\Users\Yash Khartode\Desktop\DSA C++\1_array> g++ 6_reverse_array.cpp ; ./a.exe
2,9,3,4,5,
*/

/*
Reverse an array: with extra space
Space Complexity: input size (n) & xtra space (n) ---> O(n)
Time Complexity: 2 loops --> O(n+n) => O(2n) => O(n)
*/