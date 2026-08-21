#include <iostream>  // Preprocessor Directives all start with #
                     // It is header file include pre-written code required to execute our program.
                     // Preprocessor means a Spatial type of instruction given by Directive which we needs to do it befor compilation.

#define PI 3.14     // Make PI Constant with 3.14 value.
                    // This is called Macros in C++.

using namespace std; // This is once told to compiler that execute all registered Namespaces.
                     // Standard C++ Namespace is called "std".
                     // cout, cin is DEFINE in <iostream> ------> DECLARE in NameSpace & Registered in "std".

int main() {        // Main Function
                    // Starting of program execution
                    // Written once in Program and return integer value.
                    // {} block of code
    cout << "I am Yash" << endl;
    cout << "PI = " << PI << endl;

    // "*" Pattern using cout.
    cout << "****" << endl;
    cout << "***" << endl;
    cout << "**" << endl;
    cout << "*" << endl;

    return 0;      // Last Point
}

// C++ is a Case Sensitive Programming Language.
// ; -> Statement Terminator
// g++ 1_code.cpp ---------> Compile file.
// ./a.exe ----------------> Run code.
// One Run Command: g++ 1_code.cpp && ./a.exe
//                  g++ 1_code.cpp ; ./a.exe

/*
code.cpp ------> Compiler -------> code.exe ---------> "Hello" (Output)
(Source code)                     (Executable code)
*/
