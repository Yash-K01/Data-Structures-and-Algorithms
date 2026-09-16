#include <iostream>
using namespace std;

int main(){
    int a = 10;
    cout << &a << endl;
    return 0;
}

/*
OUTPUT:
PS C:\Users\Yash Khartode\Desktop\DSA C++> g++ 16_Pointers.cpp ; ./a.exe         
0x61ff0c
*/

/*
int a = 10;
Memory:  a
         10 <- value
         0x7920 <-- memory address in Hexadecimal

Decimal(10)     Binary(2)     Hexadecimal(Base 16) <- 16 digits make memory address
0 to 9           0,1          0 to 9 a(10), b(11), c(12), d(13), e(14), f(15)

Address of Operator: "&" gives the address of a variable.
suppose a
       10       &a = 7920 -> in code brings address of variable 'a'.
      0x7920
*/