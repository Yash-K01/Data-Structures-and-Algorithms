#include <iostream>
using namespace std;

int main(){
    cout << (10/3.0) << endl; // Here 3.0 is the Double value and after Dividing by '10 int' it will give output Double.

    cout << ('A' + 1) << endl; // Implicit Conversion.
                               // Here the char is store as Number in memory. When compiler see this operation then,
                               // 'A' char(65) and 1 get added 65 + 1 = 66. By Hierarchy sequence Output is int.

    return 0;
}

/*
Typecasting: Conversion of data from one type to another.

1. Implicit Conversion: automatic conversion. Compiler do it automatically.
                        Convert small Datatype in Big so it is called as Type Promotion.
                        Hierarchy: bool -> char -> int -> float -> double
2. Explicit Conversion: 
*/

/*
OUTPUT:
PS C:\Users\Yash Khartode\Desktop\DSA C++> g++ 6_Typecast.cpp    
PS C:\Users\Yash Khartode\Desktop\DSA C++> ./a.exe
3.33333
66
*/