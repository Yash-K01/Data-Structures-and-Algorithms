#include <iostream>
using namespace std;

// Function of Binary to Decimal Conversion.
void binToDec(int binNum){
    int n = binNum;                // n = 101     lastDig = n % 10    decNum = decNum + lastDig * pow     pow (2^0) = pow * 2      n = n/10
    int decNum = 0;                // 101 > 0      101 % 10 = 1             0 + (1 * 1) = 1               1 * 2 = 2 (2^1)          101/10 = 10
    int pow = 1;                   // 10 > 0        10 % 10 = 0             1 + (0 * 2) = 1               2 * 2 = 4 (2^2)          10/10 = 1
    while(n > 0){                  // 1 > 0          1 % 10 = 1             1 + (1 * 4) = 5               4 * 2 = 8 (2^3)           1/10 = 0
        int lastDig = n % 10;      // 0 > 0 ...NO       So decNum = 5
        decNum += lastDig * pow;
        pow = pow * 2;
        n = n/10;
    }
    cout << decNum << endl;
}

// Function to convert Decimal to Binary.
void decToBin(int decNum){
    int n = decNum;               // n = 4       rem = n % 2         binNum = binNum + rem * pow        n = n/2       pow = pow * 10
    int pow = 1;                  // 4 > 0        4 % 2 = 0               0 + (0 * 1) = 0               4/2 = 2        1 * 10 = 10
    int binNum = 0;               // 2 > 0        2 % 2 = 0               0 + (0 * 10) = 0              2/2 = 1        10 * 10 = 100
    while(n > 0){                 // 1 > 0        1 % 2 = 1               0 + (1 * 100) = 100           1/2 = 0        100 * 10 = 1000
        int rem = n % 2;          // 0 > 0 ...NO  binNum = 100
        binNum += rem * pow;
        n = n/2;
        pow = pow * 10;
    }
    cout << binNum << endl;
}

int main(){
    cout << sizeof(int) << endl;
    cout << sizeof(long double) << endl;
    cout << sizeof(short int) << endl;
    cout << "Decimal Number is: ";
    binToDec(10000);
    cout << "Binary Number is: ";
    decToBin(4);
    return 0;
}

/*
OUTPUT:
PS C:\Users\Yash Khartode\Desktop\DSA C++> g++ 15_Binary_Num_System.cpp ; ./a.exe
4
12
2
Decimal Number is: 16
Binary Number is: 100
*/

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

37 --> 2  37  1 (100101) = 37
       2  18  0
       2   9  1       1    0    0    1    0    1
       2   4  0      2^5  2^4  2^3  2^2  2^1  2^0      -> In odd number the first bit 2^0 will always ON (1).
       2   2  0       1    0    0    1    0    1       -> Now check for number like here is 37 in all powers we get a power <=37
           1          32      +      4     +   1 = 37  -> Here 2^5 = 32 which is < 37 and nearest.
                                                       -> 2^4 = 16 --> 32 + 16 = 48 big than 37 keep (0)
                                                       -> 2^3 = 8 --> 32 + 8 = 40 > 37 keep (0)
                                                       -> 2^2 = 4 --> 32 + 4 = 36 < 37 keep (1)
                                                       -> 2^1 = 2 --> 36 + 2 = 38 > 37 keep (0)
                                                       -> 2^0 is already 1 for odd number.
Number   Binary representation
 1            1
 2           10 -> 2^1(1) + 2^0(0) = 2 + 0 = 2
 3           11 -> 2^1(1) + 2^0(1) = 2 + 1 = 3
 4          100
 5          101
 6          110   - Here 16 requires 5 bits but bigger than 16 will require more bits.
 7          111   - So the Data Types concept comes here.
 8         1000   - Data Types tells us RANGE -> size of data we can store in memory.
 9         1001   - int x = 5 requires 3 bits
 10        1010   - when x = 16 comes it require 5 bits so as suddenlly we can not increase bit size in memory.
 11        1011   - Because we know in memory one fix size of position in allocated to 'x' variable it never changes.
 12        1100   - We can not resize it. Resize works in Dynamic memory allocation but its different term.
 13        1101   - So for int '4' bytes is given which is equal to '32' bits which can easily store big number.
 14        1110
 15        1111
 16       10000

Data Type Modifiers: Alter the meaning of existing data types.
  Now int -> size -2^31 to (2^31)-1  Which is 4 bytes = 32 bits
  32 spaces in memory stores 0/1, 0/1, 0/1 ........ at each space 2 possibilities are there.
  So like Permutation/Combination 2^23 possibilities. But half are Negative numbers also and half Positive,
  2^32/2 = 2^31 (and (2^31)-1 positive side because it includes '0' also)

1. long: >=4 bytes (more than int) used for int,double. If we want to store data greater than (2^31)-1 then we use 'long int'.
2. short: 2 bytes, used with 'int' only and decrease the size by 2 bytes.
3. long long: Used for 'int' only.
4. signed: it is same as int
5. unsigned: can only store non-negative numbers.(Here all numbers are positive so no need of MSB so that MSB place is removed and unsigned get 2^32 numbers space location in memory.)

MSB: First Bit in any Data Type is MSB -> (Most Significant Bit).
- if it is 0 then total bits having an POSITIVE number.
- if 1 then NEGATIVE number.(Storing the Negative number in memory is not simple for that first the negative number is converted in 2's complement see in BIT Manipulation chapter)

6. We can combine two different modifiers like, 'unsigned short int age;'

Q: Following are the rules of adding 2 binary digits :
0 + 0 = 0, carry = 0
1 + 0 = 1, carry = 0
0 + 1 = 1, carry = 0
1 + 1 = 0, carry = 1
So, in math if 2 + 3 = 5, in binary it looks like
  1 0
+ 1 1
1 0 1
Using this method, try to add these 2 numbers (63 & 22).
*/