#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int age = 22;
    char ch = 'Y';
    bool isAdult = true;
    float marks = 99.01;
    double pno = 4345454334;

    cout << "Size of int = " << sizeof(int) << endl;
    cout << "Size of char = " << sizeof(char) << endl;
    cout << "Bool: " << isAdult << endl;

    // setprecision() is used to print all numbers store in Double variable as it is.
    // By default value is to print '5' numbers.
    cout <<setprecision(10)<< marks << "\n" << pno << endl;
    return 0;
}

// Size of int = 4
// Size of char = 1
// Bool: 1
// 99.01
// 4.34545e+009 -> Not a proper value print.

// Size of int = 4
// Size of char = 1
// Bool: 1
// 99.01000214
// 4345454334 -> Because of setprecision() the valuse print proper.

/*
Primitive                               Non-primitive
1. Integer (int) 4 Bytes                 1. String
2. Character (char) 1 Byte               2. Array
3. Boolean (bool) 1 Byte                    etc.
4. Floating point (float) 4 Bytes
5. Double (double) 8 Bytes

- 1 Byte = 8 Bits 01001010
- In 'char' store A,B,a,b,@,$ in '' single quotes only.
- Bool true = 1 & false = 0.
- Double used to store 'int' & 'float' but "Big" numbers.

COMMENTS:
1. Single Line: // Hi..!
2. Multi Line:  /* Hi
                */