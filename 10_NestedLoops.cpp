#include <iostream>
using namespace std;

int main(){
    for(int i=1; i<=4; i++){     // i++  Outer   j++             Inner              Output
        for(int j=1; j<=4; j++){ // 1     1<=4   1,2,3,4,5    1,2,3,4,(5 no)<=4     1 1 1 1
            cout<< i << " ";     // 2     2<=4   1,2,3,4,5    1,2,3,4,(5 no)<=4     2 2 2 2
        }                        // 3     3<=4   1,2,3,4,5    1,2,3,4,(5 no)<=4     3 3 3 3     
        cout<< endl;             // 4     4<=4   1,2,3,4,5    1,2,3,4,(5 no)<=4     4 4 4 4
    }                            // 5     5<=4 No....
    return 0;
}

/*
1. Outer Loop: It decides to print Number of Rows. How much rows to print Do it in outer loop.
     C1 C2 C3 C4
  R1 1  1  1  1  (4 -> 1 prints)
  R2 2  2  2  2  (4 -> 2 prints) (4) -> Rows
  R3 3  3  3  3  (4 -> 3 prints)
  R4 4  4  4  4  (4 -> 4 prints)
2. Inner Loop: It decides to print Number of columns/each row. What to print in each row Do it in inner loop.
3. Work in inner loop: Basically work in Each Row.
*/