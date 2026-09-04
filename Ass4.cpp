#include <iostream>
using namespace std;

// Function for product of two numbers.
int prod(int a, int b){
    return a * b;
}

// Function to print number is odd or even.
bool isEven(int n){
    if(n % 2 == 0){
        return true;
    } else {
        return false; 
    }
}

// Function to print factorial of number 'n'.
int fact(int n){
    int f = 1;
    for(int i=1; i<=n; i++){
        f = f * i;
    }
    cout << "Factorial(" << n << ") = " << f << endl;
    return f;
}

int main(){
    cout << prod(10, 20) << endl;
    cout << isEven(20) << endl;
    cout << isEven(19) << endl;
    fact(5);
    return 0;
}

/*
OUTPUT:
PS C:\Users\Yash Khartode\Desktop\DSA C++> g++ Ass4.cpp ; ./a.exe        
200
1
0
Factorial(5) = 120
*/