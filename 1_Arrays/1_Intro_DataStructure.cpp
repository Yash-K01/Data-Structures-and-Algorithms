#include <iostream>
using namespace std;

int main(){
    int marks[] = {1,20,300};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;

    cout << "Length of array: " << sizeof(marks) / sizeof(int) << endl;
    return 0;
}

/*
OUTPUT:
PS C:\Users\Yash Khartode\Desktop\DSA C++\1_Arrays> g++ 1_Intro_DataStructure.cpp ; ./a.exe
1
20
300
Length of array: 3
*/

/*
Data Structures: Way of arranging a DATA.
1. Linear.
2. Non-Linear.

Arrays: Linear collection of same type of elements that are stored together in contiguous memory spaces.
int marks
   |99|65|64|86|64|24|64|
    0  1  2  3  4  5  6  --> index: position like (int - 4byte, 4byte, 4byte,......)
length/size => 7 which is 0 to 6 index.

Creating an Array: type name[];
1. int marks[50]; -> In this way of creating array all the values comes garbage values in array.
    |  |  |  |.........|   To access the element of the array we use INDEX. Like,
    0  1  2  3         49  marks[0] <-- work as an Variable to access the array element.
                           marks[1]

2. int marks[50] = {1,2,3};
Here in this way of creating array we Declare array and Initialize with some values.

3. int marks[] = {1,2,3};
Here, no need to give size of array. In this case the marks[] array created a 3 size array because of 3 values assign in curly braces.

- Memory is statically allocated (at compile time).
- At run time (Dynamically) we can not allocate memory to arrays.

-> sizeof(marks) / sizeof(int): Gives an size of array how much element it has.
-> sizeof(marks): Gives an total no. of Bytes occupied by the memory of this marks[].
*/