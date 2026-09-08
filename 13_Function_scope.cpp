#include <iostream>
using namespace std;

int num = 25; // Global variable

void sum(int a, int b){
    cout << num << endl;
    int s = a + b;    // Local variable
    cout << s << endl;
}

int main(){
    sum(5, 5);
    cout << num << endl;
    return 0;
}

/*
Scope: Area where a variable can be accessed or used.
1. Local scope of variables: 
   variables in side the function, loops(i,j), if-else, { } -> Block are useful in side the block only.
   We can not use it out side the block is local scope.

2. Global scope of variables:
   In global scope variables are declared in open out of blocks like function, loops, if-else, { }
   and the variables we can use in any block.

OUTPUT:
PS C:\Users\Yash Khartode\Desktop\DSA C++> g++ 13_Function_scope.cpp ; ./a.exe
25
10
25

*/