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
    return 0;
}

/*
1. for Loop: Runs while condition is true
    for(initialisation; condition; updation){}
        int n = 1;       n <= 5       n++
*/