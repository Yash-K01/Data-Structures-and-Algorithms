#include <iostream>
using namespace std;

void changeA(int a){
    a = 20;
    cout <<"a in changeA(): " << a << "\n";
}

// pass by reference using Pointer.
void changeB(int *ptr){
    *ptr = 20;
    cout << ptr << "\n";
    cout << "b in changeB(): " << *ptr << "\n";
}

// pass by reference using Reference variable.
void changeZ(int &z){
    z = 25;
    cout <<"z in changeZ(): " << z << "\n";
}

int main(){
    int a = 10;
    changeA(a);
    cout <<"a in main(): " << a << "\n";
    cout << endl;

    int b = 10;
    cout << "First value of b: " << b << "\n";
    changeB(&b);
    cout << "b in main(): " << b << "\n";
    cout << endl;

    // pass by reference variable
    int k = 10;
    cout <<"First k: " << k << "\n";
    int &n = k; // Reference variable should initialize other wise it show an error.
    n = 25;
    cout <<"Value of &n = k: " << n << "\n";
    cout <<"Second k: " << k << "\n";

    int z = 5;
    cout <<"First z: " << z << "\n";
    changeZ(z);
    cout <<"z in main(): " << z << "\n";
    return 0;
}

/*
OUTPUT:
PS C:\Users\Yash Khartode\Desktop\DSA C++> g++ 17_Passing_Arguments.cpp ; ./a.exe
a in changeA(): 20
a in main(): 10

First value of b: 10
0x61ff04
b in changeB(): 20
b in main(): 20

First k: 10
Value of &n = k: 25
Second k: 25
First z: 5
z in changeZ(): 25
z in main(): 25
*/

/*
Passing Arguments:
Pass by value: When parameter is a copy of actual argument variable in memory.
Let suppose,
    |_______________| The changeA() make the copy and all changes happen in copy when changeA() stack frame removes and control come to main() then value of a = 10.
    |ChangeA  a=20  | Here ChangeA() make a = 10 copy and all changes happens in 'a' variable it never changes in main().
    |_______________|
    |main  a=10     | In main() if the a = 10 and using ChangeA() if we set a = 20 it never change original value in the main(a).
    |_______________|

Pass by reference: (pass by address)
                   When we pass the reference of argument to the function.
1. pointers: 
    |__________________________| 
    |ChangeA  ptr -> 0x101     | Here when main() pass 'a' it passes the address of variable 'a'.
    |__________________________| In changeA() ptr changes the original value of main(a).
    |main  a=10 &a -> 0x101    | Let in main() a = 10 and pass to changeA(). In changeA() a = 20 after work complete of changeA() control comes to main(). 
    |__________________________| When control comes to main() the 'a' in main() has value 20.

2. reference variables: is an alternate name (alias) of already existing variable.
   int a = 5; --> Here 'a' has memory loaction with value 5.
   int &b = a; --> The '&b' is used as reference variable of 'a'. Change in 'a' or '&b' changes happens in same memory location.
a & b refer to the same location in memory.
Marathi: jer memory location ch nahi sangitla jya variable ch apn nav change kartoy ter reference variable cha kahi artha nahi.

NOTE:
float* a,b; --> When we crate 10 Pointer's that much time * is used.
Here, a -> float ptr.
      b -> normal float variable.

int *ptr = 0; -> Has a value 0x0
If we initialize the *ptr with '0' it works like a NULL.

Practice:-----------------------------------------------------------------------------------------------------------------
int a = 32;
int *ptr = &a;   --> *ptr = 32 which is 'a' & ptr = address of a.

char ch = 'A';
char &cho = ch;   --> &cho and ch = 'A' in int it is 65

cho += a;    --> cho(97) = cho(65) + a(32) Here, 'cho' is 97 so the 'ch' is also change to 97 because of Reference Variable.
*ptr += ch;    --> *ptr(129) = *ptr(32) + ch(97) Here, *ptr = 'a' because 'ptr' has address of 'a' variable.
cout << a << ", " << ch << endl;    ---> a = 129 , ch = 'a' -> ASCII of 97

*/