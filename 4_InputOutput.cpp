# include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter age: ";

    // Any value enter in terminal save in 'age' variable.
    cin >> age;
    cout << "Age is: " << age << endl;

    int a;
    int b;

    // input a
    cout<<"Enter a: ";
    cin>> a;

    // input b
    cout<<"Enter b: ";
    cin>> b;

    // Calculate sum
    int sum = a+b;
    cout<< "Sum: "<< sum <<endl;
    return 0;
}

// "int" Division in code never gives number after decimal in output it gives absolute value.
