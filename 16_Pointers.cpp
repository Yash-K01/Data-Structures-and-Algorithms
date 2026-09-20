#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    int **pptr = &ptr;
    *ptr = 20;

    float pi = 3.14;
    float* ptr2 = &pi;

    int *ptr0 = NULL;

    cout << &a << " = " << ptr << endl;
    cout << &pi << " = " << ptr2 << endl;
    cout <<"Pointer of Pointer: ";
    cout << &ptr << " = " << pptr << endl;
    cout << "Dereference of '*(&a)': " << *(&a) << endl;
    cout << "New value of 'a': " << a << "\n";
    cout << "Null Pointer: " << ptr0 << "\n";
    return 0;
}

/*
OUTPUT:
PS C:\Users\Yash Khartode\Desktop\DSA C++> g++ 16_Pointers.cpp ; ./a.exe         
0x61ff04 = 0x61ff04
0x61fefc = 0x61fefc
Pointer of Pointer: 0x61ff00 = 0x61ff00
Dereference of '*(&a)': 10
New value of 'a': 20
Null Pointer: 0
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

Pointers: A special variable that stores address of another variable.
int *ptr = &a;
variable ->  a          ptr                                        pptr
value ->     10         0x100                                      0x500
address ->   0x100      0x500                                      0x1000
            int (4-B)   int (8-Bytes)<- Because it is pointer.     It is storing address of Pointer, So it is called Pointer of Pointer.

Dereference Operator: Gets the value of the variable pointed by any pointer.
* operator lets us directly access & modify the value of variable.
int a = 10;
int *ptr = &a;                *(address) <- Here when star come on any address it become a value store at that address.
'*ptr' will be equal to 10.   [_value__]

Null Pointer: We assign NULL value to a pointer to show that it doesn't point to any location.
    int *ptr = NULL; --> Show the output 0x0.
- Dereferencing null ptr is not possible as it will result in error.
- If we Dereference the 'null ptr' then next code after 'NULL ptr' will not execute because it will show error.

*/