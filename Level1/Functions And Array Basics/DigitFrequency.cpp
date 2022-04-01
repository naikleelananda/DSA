/*
1. You are given a number n.
2. You are given a digit d.
3. You are required to calculate the frequency of digit d in number n.

Constraints
0 <= n <= 10^9
0 <= d <= 9

Format
Input
A number n
A digit d

*/

#include<bits/stdc++.h>
using namespace std;

int digFrequency(int n , int d ){
    int count = 0;

    while( n != 0){
        int dig = n % 10;

        if ( dig == d) {
            count++;
        }

        n = n/10;

    }
    return count;
}

int main() {
    int n , d;
    cin>>n>>d;

    int ans = digFrequency(n , d);
    cout<<ans <<endl;

    return 0;
}