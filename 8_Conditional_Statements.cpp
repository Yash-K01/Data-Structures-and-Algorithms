#include <iostream>
using namespace std;

int main(){
    int age;
    cout <<"Enter your age: ";
    cin >> age;
    if (age >= 18){
        cout << "Can vote..!" << endl;
    } else if(age >= 15) {
        cout << "Nabalik." << endl;
    } else {
        cout << "Can not vote." << endl;
    }
    return 0;
}

/*
1. if-else: if(5,-5,0){} --> The 5,-5 consider as True and 0 as False and accordinglly statement execute.
2. else if
3. ternary operator
4. switch
*/