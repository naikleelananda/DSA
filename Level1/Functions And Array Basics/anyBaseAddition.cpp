/*
Any Base Addition
Easy

1. You are given a base b. 2. You are given two numbers n1 and n2 of base b. 3. You are required to add the two numbes and print their value in base b.


Constraints
2 <= b <= 10 0 <= n1 <= 256 0 <= n2 <= 256
Format

Input
A base b A number n1 A number n2

Output
A number representing the sum of n1 and n2 in base b.

Example
Sample Input

8
777
1

Sample Output
1000
*/

#include<iostream>

using namespace std;

int getSum(int base, int n1, int n2) {
    int rv = 0;
    int carry = 0;
    int p = 1;
    while (carry > 0 || n1 > 0 || n2 > 0)
    {
        int dig1 = n1 %10;
        int dig2 = n2 %10;
        n1 = n1/10;
        n2 = n2/10;

        int d = dig1 + dig2 + carry ;
        carry = d / base;
        d = d % base;

        rv += d * p;
        p = p*10;


    }
    return rv;

    
}


int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getSum(b, n1, n2) << endl;

}