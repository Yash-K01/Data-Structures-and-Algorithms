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
    
    return 0;                     
}