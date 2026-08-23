#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout<< "Enter a number: ";
    cin>> n;
    int fact = 1;              //                     1
    for(int i=1; i<=n; i++){   // 1    1<=3     1++   1*1 = 1
        fact *= i;             // 2    2<=3     2++   1*2 = 2
    }                          // 3    3<=3     3++   2*3 = 6
                               // 4    4<=3  No....
    cout<< "Factorial of "<< n << " is: "<< fact << endl;
    
    cout<<"Multiplication Table."<< endl;
    for(int i=1; i<=10 ; i++){                                 // n   i<=10       (n*i)
        cout<< n << " x " << i << " = " << (n * i) << endl;    // 2   1<=10  1++   = 2
    }                                                          // 2   2<=10  2++   = 4
                                                               // 2   3<=10  3++   = 6
                                                               // 2   4<=10  4++   = 8
                                                               // 2   5<=10  5++   = 10
                                                               // 2   6<=10  6++   = 12
                                                               // 2   7<=10  7++   = 14
                                                               // 2   8<=10  8++   = 16
                                                               // 2   9<=10  9++   = 18
                                                               // 2   10<=10 10++  = 20
                                                               // 2   11<=10  No....
    cout<<"Check for Armstrong."<< endl;
    int k, num, dig = 0;
    cout<<"Enter number: ";
    cin>> k;                                      // k = 371
    num = k;                                      // num = 371
    long long cubeSum = 0;
    while(num > 0){            // 371 > 0       37 > 0        3 > 0     0>0 No....
        num/=10;               // 371/10=37     37/10=3       3/10=0
        dig++;                 // 0++ =1         1++ =2       2++ =3    dig = 3
    }   
    num = k;                                              // num > 0     lastDig                 cubeSum = 0                     num
    while(num > 0){                               // 371 > 0     371 % 10 = 37.1 -> 1    1^3 = 0 + 1 = 1          371/10 = 37.1 -> 37
        int lastDig = num % 10;                   // 37 > 0      37 % 10 = 3.7 -> 7      7^3 = 1 + 343 = 344      37/10 = 3.7 -> 3
        cubeSum += round(pow(lastDig, dig));      // 3 > 0       3 % 10 = 0.3 -> 3       3^3 = 344 + 27 = 371     3/10 = 0.3 -> 0
        num /= 10;                                // 0 > 0 No....
    }
    if(k == cubeSum){   // 371 == 371
        cout<< "Armstrong number"<< endl;
    } else {
        cout<< "NOT an Armstrong"<< endl;
    }

    cout<< "N Prime Numbers."<< endl;
    int y;                           // i<=y    curr   j       j*j<=i             curr % j == 0    isPrime
    cout<< "Enter Number: ";         // 2<=15    2     2        4 <= 2             no               T
    cin>> y;                         // 3<=15    3     2        4 <= 3             no               T
    for(int i=2; i<=y; i++){         // 4<=15    4     2        4 <= 4            4 % 2 == 0   x    F
        int curr = i;                //                3        9 <= 4                         x
        bool isPrime = true;         // 5<=15    5     2        4 <= 5            5 % 2 == 1        T
        for(int j=2; j*j<=i; j++){   //                3        9 <= 5
            if(curr % j == 0){       // 6<=15    6     2        4 <= 6            6 % 2 == 0        F
                isPrime = false;     // 7<=15    7     2        4 <= 7            7 % 2 == 1        T
            }                        //                3        9 <= 7
        }                            // 8<=15    8     2        4 <= 8            8 % 2 == 0        F
        if(isPrime){                 // 9<=15    9     2        4 <= 9            9 % 2 == 1        F
            cout<< curr << " ";      //                3        9 <= 9            9 % 3 == 0        
        }                            // 10<=15   10    2        4 <= 10           10 % 2 == 0  x    F
    }                                //                3        9 <= 10           10 % 3 == 1  x
    cout<< endl;                     //                4        16 <= 10                       x
                                     // 11<=15   11    2        4 <= 11           11 % 2 == 1       T
                                     //                3        9 <= 11           11 % 3 == 2
                                     //                4        16 <= 11
                                     // 12<=15   12    2        4 <= 12           12 % 2 == 0       F
                                     // 13<=15   13    2        4 <= 13           13 % 2 == 1       T
                                     //                3        9 <= 13           13 % 3 == 1       
                                     //                4        16 <= 13
                                     // 14<=15   14    2        4 <= 14           14 % 2 == 0       F
                                     // 15<=15   15    2        4 <= 15           15 % 2 == 1       F
                                     //                3        9 <= 15           15 % 3 == 0       
                                     // 16<=15 No....     ANS: 2, 3, 5, 7, 11, 13

    cout<< "Fibonacci Series."<< endl;
    int m;                               // first  sec  i++  i<m    third = 1st + 2nd    1st = 2nd     2nd = 3rd
    cout<< "Enter num: ";                //   0     1   2    2<10      0 + 1 = 1             1             1
    cin>> m;                             //   1     1   3    3<10      1 + 1 = 2             1             2
    int first = 0, sec = 1;              //   1     2   4    4<10      1 + 2 = 3             2             3
    cout << first << " " << sec << " ";  //   2     3   5    5<10      2 + 3 = 5             3             5
    for(int i=2; i<m; i++){              //   3     5   6    6<10      3 + 5 = 8             5             8
        int third = first + sec;         //   5     8   7    7<10      5 + 8 = 13            8             13
        cout << third << " ";            //   8     13  8    8<10      8 + 13 = 21           13            21
        first = sec;                     //   13    21  9    9<10      13 + 21 = 34          21            34  
        sec = third;                     //   21    34  10   10<10 No....
    }                                    //  ANS: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
    cout << "\n";
    
    return 0;                     
}

/*
OUTPUT:
PS C:\Users\Yash Khartode\Desktop\DSA C++> g++ Ass2.cpp ; ./a.exe
Enter a number: 5
Factorial of 5 is: 120
Multiplication Table.
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
Check for Armstrong.
Enter number: 371
Armstrong number
N Prime Numbers.
Enter Number: 50
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 
Fibonacci Series.
Enter num: 10
0 1 1 2 3 5 8 13 21 34
*/