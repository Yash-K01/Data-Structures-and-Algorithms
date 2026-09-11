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

// Function to print a number is prime or not.
bool isPrime(int n){
    if(n == 1){
        return false;
    }

    for(int i=2; i*i<=n; i++){ // One more logic i<=n-1.
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

// Function to find binomial coefficient for given n & r.
int factorial(int n){
    int fact = 1;              // n       n!      Suppose we have 4 subject from that choice is of 2.
    for(int i=1; i<=n; i++){   //  C = -------    Posible combinations are: (1,2) (1,3) (1,4) (2,3) (2,4) (3,4) => 6 
        fact *= i;             //   r  r!(n-r)!   So calculating manually it  takes time so we use this formula.
    }
    return fact;               // 4        4!           24
}                              //  C  = --------- => --------- = 6
                               //   2    2!(4-2)!        4
int binCoeff(int n, int r){
    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n-r);

    int result = val1 / (val2 * val3);
    return result;
}

int main(){
    cout << prod(10, 20) << endl;
    cout << isEven(20) << endl;
    cout << isEven(19) << endl;
    fact(5);
    cout << isPrime(22) << endl;
    cout << binCoeff(4, 2) << endl;
    return 0;
}

/*
OUTPUT:
PS C:\Users\Yash Khartode\Desktop\DSA C++> g++ Ass4.cpp ; ./a.exe        
200
1
0
Factorial(5) = 120
0
6

*/