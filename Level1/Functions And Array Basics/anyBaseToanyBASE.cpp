/*1. You are given a number n.
2. You are given a base b1. n is a number on base b.
3. You are given another base b2.
4. You are required to convert the number n of base b1 to a number in base b2.

Constraints
0 <= n <= 512
2 <= b1 <= 10
2 <= b2 <= 10

Format
Input
A number n
A base b1
A base b2


*/

#include<bits/stdc++.h>
using namespace std;

int anyBaseToDecimal( int n ,int  sourceBase) {

    int ans = 0;
    int k = 0;
    while ( n != 0 ){

        int dig = n % 10 ;
        ans = ans + dig * pow( sourceBase  , k);
        k++;
        n = n / 10;
    }

    return ans;

} 

int decimalToanyBase ( int number ,  int destBase ) {
    
    int ans = 0;
    int k = 0;
    while ( number > 0) {

        int dig = number % destBase ;
        number = number / destBase;

        ans = ans + dig * pow ( 10 , k) ;
        k++;

    } 
    return ans ;
}


int main() {
    int number;
    int sourceBase ;
    int destBase ;

    cin>>number>>sourceBase>>destBase;
    int  n = anyBaseToDecimal(number , sourceBase) ;
    cout << decimalToanyBase ( n , destBase )<<endl;

    return 0;
}
