#include <iostream>
using namespace std;

int main(){
    cout<< "Triangle Pattern."<< endl;
    int n =5;                       // n = 5 ; val = ture(1)
    bool val = true;                // i<n     j<=i                val      !val
    for(int i=0; i<n; i++){         // 0<5     0<=0, 1<=0          1          0      
        for(int j=0; j<=i; j++){    // 1<5     0<=1, 1<=1, 2<=1    01         1,0 (This changes 0, 1 in Inner Loop.)
            cout << val << " ";     // .... So On
            val = !val;
        }
        cout<< endl;
    }
    
    cout<< "Rhombus Pattern."<< endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<=n-i-1; j++){
            cout << " ";
        }
        for(int j=0; j<n; j++){
            cout << "*";
        }
        cout << endl;
    }

    cout<< "Palindromic Pattern with Numbers." << endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        for(int j=i; j>=1; j--){
            cout << j;
        }
        for(int j=2; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}

/*
OUTPUT:
PS C:\Users\Yash Khartode\Desktop\DSA C++> g++ Ass3.cpp ; ./a.exe
Triangle Pattern.
1 
0 1 
0 1 0 
1 0 1 0 
1 0 1 0 1 
Rhombus Pattern.
     *****
    *****
   *****
  *****
 *****
Palindromic Pattern with Numbers.
    1
   212
  32123
 4321234
543212345
*/