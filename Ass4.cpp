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

// Function to print a all Primes in a range from 2 to n.
int prime(int n){
    for(int i=2; i<=n; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
}

// Function to check Palindrome number.
int reverse(int n){
    int res = 0;
    while(n > 0){
        int lastDig = n % 10;
        res = res * 10 + lastDig;
        n = n/10;
    }
    return res;
}

bool isPalindrome(int num){
    int revNum = reverse(num);
    return num == revNum;
}

// Function to calculate Sum of digits of number.
int digSum(int n){
    int res = 0;
    while(n > 0){
        res += n % 10;
        n = n/10;
    }
    return res;
}

// Function to calculate a^2 + b^2 + 2*ab.
int abSquare(int a, int b){
    return a*a + b*b + 2*a*b;
}

// Function to print largest of 3 numbers.
int largest(int a, int b, int c){
    if(a >= b && a >= c){
        return a;
    } else if(b >= c){
        return b;
    } else{
        return c;
    }
}

// Function to get character as parameter and return next english alphabet occurs.
char getNextChar(char ch){
    if(ch == 'z'){
        return 'a';
    } else{
        return ch + 1;
    }
}

int main(){
    cout << prod(10, 20) << endl;
    cout << isEven(20) << endl;
    cout << isEven(19) << endl;
    fact(5);
    cout << isPrime(22) << endl;
    cout << binCoeff(4, 2) << endl;
    prime(50);
    cout << isPalindrome(121) << endl;
    cout << digSum(55) << endl;
    cout << abSquare(2, 4) << endl;
    cout << largest(10, 20, 5) << endl;
    cout << getNextChar('c') << endl;
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
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 
1
10
36
20
d
*/