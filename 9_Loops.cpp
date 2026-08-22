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

    int nu = 10829;
    int summ = 0;
    while(nu > 0){
        int lastDig = nu % 10; // 10829 % 10 = 9 Here we get remainder 9 & so on 2,8,0,1
        if(lastDig % 2 != 0){  // Odd number condition
            summ += lastDig;
        }
        nu = nu/10;            // 10829 / 10 = 1082.9 Here we get division but int skip decimal so 1082, 108, 10, 1, 0
    }
    cout<< "Sum of 1 0 8 2 9 is:"<< summ << endl;

    cout<< "Reverse the Give number."<< endl;
    int y = 10829;
    int res = 0;
    while(y > 0){
        int lastD = y % 10; // Here from 10829 get 9, 2, 8, 0, 1 
        res = res * 10 + lastD;  /*
        0     0    * 10 +  9 = 9           Supose [5 2 3] we can write it as,
        9     9    * 10 +  2 = 92                  2 1 0
        92    92   * 10 +  8 = 928          5 x 10^2 = 500
        928   928  * 10 +  0 = 9280         2 x 10^1 = 20
        9280  9280 * 10 +  1 = 92801        3 x 10^0 = 3
        Result = 92801                           += 523
                                 */
        y /= 10;
    }
    cout<< "Reverse: "<< res << endl;

    cout<< "Do While Loop."<< endl;
    int m = 1;
    do{
        cout << m << " ";
        if(m == 10){
            break;
        }
        m++;
    }while(m <= 15);
    cout<< " Out of loop."<< endl;

    cout<< "User keep entering numbers till enter multiple of 10."<< endl;
    // The any program where USER go on doing work. 
    // Generally such a program we write in 'while or do-while'.
    int user;
    while(true){
        cout<< "Enter number: ";
        cin >> user;
        if(user % 10 == 0){
            break;
        }
        cout <<"You entered: "<< user << endl;
    }
    cout<< "You enter multiple of 10 & loop terminated: "<< user << endl;

    for(int l=1; l<=5; l++){
        if(l == 3){
            continue; // When if condition is ture.
        }             // Means 3 == 3 the all down side statements in loop for this condition not works otherwise continue working;
        cout<< l << endl;
    }

    cout<< "Prime Numbers."<< endl; 
    // Mathematically Prime number which come in '1s' table and self table.
    // Supose 'n' is prime number which come only in '1 & n' table.
    // Factors of prime number is the 'num self & 1'.
    // Only one factor is enough to check whether num is prime or not.
    // 12 has factors --> 1, 12, 2, 6, 3, 4. So only one of this is enough to check prime or composite num.
    /*
       for( int x=2; x<= n-1; x++){
            n % x --> 0 (composite number)
                  --> x (Prime number)
       }
    */
    int k = 7;
    bool isPrime = true; // Asume the num is prime till we get its factor.
    for(int x=2; x<=k-1; x++){
        /*
            2     2<=6  y  3
            3     3<=6  y  4
            4     4<=6  y  5
            5     5<=6  y  6
            6     6<=6  y  7
            7     7<=6  n
        */
        if(k % x == 0){ // x is a factor of k or x completely divides k. k is non-prime.
            isPrime = false;
            break;
        }
    }
    if(isPrime){ // In condition no need of 'isPrime == true'. Just isPrime also tells to 'IF' that condition it ture or not.
        cout<< "Num is Prime."<< endl;
    } else{
        cout<< "Num is NOT Prime."<< endl;
    }

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

3. do-while Loop: In this loop 'once work' always done and then checks the condition.
4. break: Used to terminate loop or stop the loop and get out.
5. continue: Skip an iteration and continue next part.
*/