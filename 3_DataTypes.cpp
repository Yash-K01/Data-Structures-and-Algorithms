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