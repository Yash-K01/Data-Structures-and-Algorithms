#include <iostream>
using namespace std;

int main(){
    int num;
    for(num=1; num<=5; num++){  // Here 'num' has Loacal scope in loop.
        cout << num << " ";
        /*
        DRY Run:
        Condition          O/P
        num = 1             1
        num = 2             2
        num = 3             3
        num = 4             4
        num = 5             5
        num != 6
        */
    }
    cout << endl;
    cout << "Last value of Num: " << num << endl;

    int n;
    cout << "Enter your n:";
    cin >> n;
    for(int i=1; i<=n; i++){
        cout << i << " ";
    }
    cout << endl;

    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    cout << "Sum: " << sum << endl;
    cout << "Sum using FORMULA n(n+1)/2: "<< n*(n+1)/2 << endl;

    cout<<"WHILE LOOP"<<endl;
    int i = 1;
    while(i <= 5){
        cout<< i << " ";
        i++;
    }
    cout << endl;

    cout<<"Square Pattern."<< endl;
    for(int i=1; i<=4; i++){
        cout << "****"<< endl;
    }

    for(int i=n; i>=1; i--){
        cout << i << " ";
    }
    cout << endl;

    cout << "Sum of 1 0 8 2 9." << endl;
    int nu = 10829;
    int summ = 0;
    while(nu > 0){
        int lastDig = nu % 10;
        if(lastDig % 2 != 0){
            summ += lastDig;
        }
        nu = nu/10;
    }
    cout<< "Sum of 1 0 8 2 9 is:"<< summ << endl;

    return 0;
}

/*
1. for Loop: Runs while condition is true
    for(initialisation; condition; updation){}
        int n = 1;       n <= 5       n++
Infinite Condition: When Condition in loop is TRUE that loop is infinite and dangerous in programming.
Iterate: run loop.
Iteration: Single run in loop.
Iterator: Loops variable is called iterator.

2. while Loop: initialisation
               While(condition){
               updation
               }
*/