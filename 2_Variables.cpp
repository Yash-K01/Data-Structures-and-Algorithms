#include <iostream>
using namespace std;

int main(){
    // 2 * (a + b) --> 2 is literal a,b is variables
    // Identifier --> variable, functions, objects, classes
    // Always give Meaningful names to identifier.

    int a = 10;
    // 'int' is Type, 'a' is variable, '=' is assignment operator & '10' is value.
    // In RAM it is stored.
    // If Variable Created in code but value is not assign then it stores garbage value by default.

    cout << "Value of a: " << a << endl;
    return 0;
}

/*
Naming Conventions:
1. Name should start with (_) or letter.
2. Name contain Upper & Lowercase letters, 0 - 9 digits & Underscore.
3. Must not be keyword (Reserved words).
4. Space in variable should not there. --> int age is = 25; <-- not allow 
*/