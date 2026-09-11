#include <iostream>
using namespace std;

int sum(int a, int b){
    cout << (a+b) << endl;
    return a + b;
}

double sum(double a, double b){
    cout << (a+b) << endl;
    return a + b;
}

int sum(int a, int b, int c){  // Here function return TYPE does not matter the Parameter TYPE matters.
    cout << (a+b+c) << endl;           // We will need to change Parameter TYPE other wise NUMBER of Parameter.
    return a + b + c;
}

double sum(int a, int b, int c, int d){
    cout << (a+b+c+d) << endl;
    return a + b + c + d;
}

int main(){
    sum(2, 3);
    sum(2.5, 2.5);
    sum(2, 3, 4);
    sum(2, 2, 2, 2);
    return 0;
}

/*
Function Overloading:
Multiple functions with the same name but different parameters.
 sum(int a, int b)
                       --> Both function has same name but parameters TYPE is different.
 sum(double a, double b)
                       --> Here in this function parameters Type also same but no. of parameters is 2 and 3 in both 'int' function.
 sum(int a, int b, int c)

OUTPUT:
PS C:\Users\Yash Khartode\Desktop\DSA C++> g++ 14_Function_overloading.cpp ; ./a.exe
5
5
9
8

*/