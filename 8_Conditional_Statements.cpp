#include <iostream>
#include <iomanip>
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


    int income;
    float tax;
    cout<<"Enter your income in Lakhs: ";
    cin>>income;
    if(income < 5){
        tax = 0;
    } else if(income <=10){
        tax = (0.2 * income);
    } else {
        tax = (0.3 * income);
    }
    cout<<setprecision(15)<< "Tax: "<< (tax * 100000) << endl;


    int a;
    int b;
    int c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    if(a >= b && a >= c){
        cout<<"A is the largest: " << a << endl;
    } else if(b >= c){
        cout<<"B is the largest: " << b << endl;
    } else{
        cout<<"C is the largest: " << c << endl;
    }


    cout<<"Ternary Operator." << endl;
    bool isAdult;
    int agee;
    cout<<"Enter age: ";
    cin>> agee;
    isAdult = agee >= 18 ? true : false;
    cout << isAdult << endl;


    cout<<"Switch Statement." << endl;
    int day;
    cout << "Enter Day (1 - 7): " << endl;
    cin >> day;
    switch(day){
        case 1 : cout << "Mon" << endl;
        break;
        case 2 : cout << "Tues" << endl;
        break;
        case 3 : cout << "Wed" << endl;
        break;
        case 4 : cout << "Thus" << endl;
        break;
        case 5 : cout << "Fri" << endl;
        break;
        case 6 : cout << "Sat" << endl;
        break;
        case 7 : cout << "Sun" << endl;
        break;
        default: cout << "Invalid input." << endl;
    }


    int num1;
    int num2;
    char op;
    cout<< "Enter Num 1: ";
    cin>> num1;
    cout<< "Enter Num 2: ";
    cin>> num2;
    cout<< "Enter Operation (+, -, *, /): ";
    cin>> op;
    if(op == '+'){
        cout<< "Addition: " << (num1 + num2) << endl;
    } else if(op == '-'){
        cout<< "Subtraction: " << (num1 - num2) << endl;
    } else if(op == '*'){
        cout<< "Multiplication: " << (num1 * num2) << endl;
    } else if(op == '/'){
        cout<< "Division: " << (num1 / num2) << endl;
    } else{
        cout << "Invalid Operation." << endl;
    }


    cout<<"Armstrong Number."<<endl;
    int nn;
    cout << "enter a 3 digit number : ";
    cin >> nn;
    int num = nn; //creating a copy
    int dig1 = num % 10;   // supose num = 155 and 155/10 remainder is 5 and store in dig1
    num /= 10;             // num = num/10 -> 15.5 store in num 15
    int dig2 = num % 10;   // same now num = 15 and 15/10 remainder is 5 and store in dig2
    num /= 10;             // num = num/10 -> 1.5 stores in num 1
    int dig3 = num;        // same now num is '1' and store in dig3
    int cubeSum = dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3;
    if (cubeSum == nn) {
        cout << nn << " is an Armstrong Number\n";
    } else {
        cout << nn << " is NOT an Armstrong Number\n";
    }


    cout<<"Leap Year."<<endl;
    int year;
    cout<<"Enter a Year: ";
    cin>> year;
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
        cout << year << " is a leap year.\n";
    } else {
        cout << year << " is NOT a leap year.\n";
    }

    return 0;
}

/*
1. if-else: if(5,-5,0){} --> The 5,-5 consider as True and 0 as False and accordinglly statement execute.
2. else if
3. ternary operator : variable = condition ? statement1 : statement2;
4. switch
*/

/*
OUTPUT:
PS C:\Users\Yash Khartode\Desktop\DSA C++> g++ 8_Conditional_Statements.cpp ; ./a.exe
Enter your age: 55
Can vote..!
Enter your income in Lakhs: 12
Tax: 360000
Enter a: 5
Enter b: 9
Enter c: 15
C is the largest: 15
Ternary Operator.
Enter age: 19
1
Switch Statement.
Enter Day (1 - 7): 
1
Mon
Enter Num 1: 5
Enter Num 2: 2 
Enter Operation (+, -, *, /): -
Subtraction: 3
Armstrong Number.
enter a 3 digit number : 371
371 is an Armstrong Number
Leap Year.
Enter a Year: 1900
1900 is NOT a leap year.
*/
