#include <iostream>
using namespace std;

int main(){

    return 0;
}

/*
Math has -> 0 to 9 -> 10 digits (Dec means 10 = Decimal)
Binary: Bi means 2 digits. (0,1 -> Bits)
1 -> Current Pass
0 -> Current not Pass

Binary to Decimal Conversion:
 1   0   0   1   0   1  = 32 + 0 + 0 + 4 + 0 + 1 --> 37 
2^5 2^4 2^3 2^2 2^1 2^0

532 = (5 x 100) + (3 x 10) + (2 x 1)
      (5 x 10^2) + (3 x 10^1) + (2 x 10^0)

1 bit -> 0, 1
8 bits -> 1 byte

Binary to Decimal:  1   0   0   1   0
                   2^4 2^3 2^2 2^1 2^0
                   16 + 0 + 0 + 2 + 0 --> 18
(18)Base 10 = (10010)Base 2:- Means 2 digit number system 10010 is equal to 18 in 10 digit number system.

0001 -> Here this starting 000 is not having any importance like 0043 in Decimals.
So Number 18 is store in 1 byte --> (0 0 0) 1 0 0 1 0 Number is 18 but starting 0s fill at empty spaces.

Decimal to Binary: 18   Keep going divide by 2        Number dividing      Remainder
                               2                            18                 0
                               2                             9                 1
                               2                             4                 0
                               2                             2                 0
                               Still we get 0, 1 at last     1                 1 Look Backwords 10010 = 18
*/