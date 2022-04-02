
/*
1. You are given a decimal number n.
2. You are given a base b.
3. You are required to convert the number n into its corresponding value in base b.

Constraints
0 <= d <= 512
2 <= b <= 10

Format
Input
A number n
A base b
*/
#include<bits/stdc++.h>
using namespace std;
int main() {

    int n , b;
    cin>>n>>b;

    int ans = 0;
    int k = 0;

    while ( n != 0)
    {
        int rem = n % b;
        ans = ans + rem * pow(10 , k);
        k++;
        n = n/b;
    }
    
    cout<<" ans is "<<ans <<endl;
    return 0;
}