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

int main(){
    cout << prod(10, 20) << endl;
    cout << isEven(20) << endl;
    return 0;
}

/*
OUTPUT:
PS C:\Users\Yash Khartode\Desktop\DSA C++> g++ Ass4.cpp ; ./a.exe        
200
1
*/