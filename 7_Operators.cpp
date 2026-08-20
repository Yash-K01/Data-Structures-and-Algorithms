#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 3;

    cout <<"Addition: "<< (a + b) << endl;
    cout <<"Subtraction: "<< (a - b) << endl;
    cout <<"Multiplication: "<< (a * b) << endl;
    cout <<"Division: "<< (a / b) << endl;
    cout <<"Modulo: "<< (a % b) << endl;

    cout << "Post Incriment: "<< a++ << endl; // Use the previous value and then update.
    cout << "Pre Incriment: "<< ++a << endl; // Update previous value and then use.
    cout << "Post Decrement: "<< b-- << endl; // 3
    cout << "Pre Decrement: "<< --b << endl; // 1

    int c = a++; // 7
    cout <<"1st: "<< c << endl;
    c = ++a; // 9
    cout <<"2nd: "<< c << endl;
    cout << "Final A: "<< a << endl;

    int m = 2;
    m += 2; //4
    cout << m << endl;
    m -= 2; //2
    cout << m << endl;
    m *= 2; //4
    cout << m << endl;
    m /= 2; //2
    cout << m << endl;
    return 0;
}

// a + b ----> Expression. Here 'a' & 'b' is Operands and '+' is Operator.
/*
Types:
1. Arithmetic Operators: Binary(+,-,*,/,% (Modulo))  Unary(++,--)
2. Assignment Operators: =, +=, -=, *=, /=
3. Relational Operators: (>, >=, <, <=, ==, !=) Gives ans True or False.
4. Logical Operators: And(&&), Or(||), Not(!)
5. Bitwise Operators: AND(&), OR(|), XOR(^), NOT(~), Left Shift(<<), Right Shift(>>)
*/

/*
Not           And            Or
T -> F    T  T -> T          T
F -> T    T  F -> F          T
          F  T -> F          T
          F  F -> F          F
*/

/*
Operator Precedence:
()[]                        Higher
++,-- (Post & Pre)            |
*,/,%                         |
+,-                           |
<,<=,>,>=                     |
==,!=                         |
&&                            |
||                            |
?: (Conditional)              |
=                             |
+=,-=,*=,/=                   |
, (Comma)                   Lower
*/

/*
OUTPUT:
PS C:\Users\Yash Khartode\Desktop\DSA C++> g++ 7_Operators.cpp
PS C:\Users\Yash Khartode\Desktop\DSA C++> ./a.exe            
Addition: 8
Subtraction: 2
Multiplication: 15
Division: 1
Modulo: 2
Post Incriment: 5
Pre Incriment: 7
Post Decrement: 3
Pre Decrement: 1
1st: 7
2nd: 9
Final A: 9
4
2
4
2
*/
