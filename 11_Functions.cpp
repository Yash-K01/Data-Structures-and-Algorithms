#include <iostream>
using namespace std;

void hello(){  //function create.
    cout << "Hello World...! \n";
}

void assistant(){              // Now, 1. Execution start from main() and main() call assistant().
    hello();                   // 2. assistant() call hello().
    cout<< "work done. \n";    // 3. hello() works and print "Hello World...!" on screen and complete go back where it called.
}                              // 4. hello() called at assistant() and that line done now assistant() works and print "work done." on screen and complete go back where it called.
                               // 5. In main() the assistant() lines work is complete and main() next line is return 0 that means program execution complete.
                               // This is how the function called and compete working and return value. Function also called in other FUNCTION.

void name(); //function (forward) declare: Because the function after main() gives error but is we declare its name before main() than is works.

int main(){                    
    assistant(); //function call
    name();
    return 0;
}

void name(){
    cout << "Sai \n";
}

/* A 3 hours movie is divided into Episods to telicast it on TV. Same, Big code we divide into small piece of code is known as Function.
Functions: Block of code which runs when it is called.

    returnType fName(){
        //do some work
        return someValue; //optional
    }

    fName(); //function call

1. void: Blank return type no need to return any thing when function has void ReturnType.
2. int, char, bool: This ReturnType returns a value if we not return it in function then code will give us error.

Forward Declaration: Declaration - the function's name, return type and parameters(if any).
                     Definition - the body of the function.
                     void sayHello() {      ----> Declaration
                        cout << "Hello \n"; ----> Definition
                     }
*/