#include <iostream>
using namespace std;

int sum(int a, int b){
    int s = a+b;
    return s;
}

int main(){
    int x = 45;
    cout << sum(2,5);
    return 0;
}

/* OUTPUT:
PS C:\Users\Yash Khartode\Desktop\DSA C++> g++ 12_Function_call.cpp ; ./a.exe 
7
*/

/* 
Two Memory Types:
1. Heap: For dynamic memory allocation.
2. Stack: Static memory allocation.
          Used in Functions.
          |           |     
          |           |
          |___________|
          |s=7   sum  | (This stack frame complete the work.
          |___________|   after return value of s=7 frame automatically empty and used for new function call.)
          |x=45  main |
          |___________| (stack frame) When main return 0 this frame also empty.
          
          - Current function is at the top of the stack.
          - When the main start execution the stack memory is allocated. At the top of stack the main is there.
          - When main Call the Function that function come to the top of stack and gets new frame.
          - In this manar the memory is allocated and empty after work done.

*/