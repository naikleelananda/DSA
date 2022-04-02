/*
1. You are given a number n.
2. You are given a base b. n is a number on base b.
3. You are required to convert the number n into its corresponding value in decimal number system.

Constraints
0 <= d <= 1000000000
2 <= b <= 10

Format
Input
A number n
A base b
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n ,b ;
   cin>>n>>b;

   
   int ans = 0;
   int k = 0;

   while ( n > 0)
   {
       int dig = n % 10 ;
       n = n/10 ;

       ans = ans + dig * pow(b , k);
       k++;
   }
   cout<<ans <<endl;
   

 return 0;
}
