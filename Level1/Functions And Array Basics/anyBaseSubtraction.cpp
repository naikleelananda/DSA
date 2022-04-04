/*
1. You are given a base b.
2. You are given two numbers n1 and n2 of base b.
3. You are required to subtract n1 from n2 and print the value.

Constraints
2 <= b <= 10
0 <= n1 <= 256
n1 <= n2 <= 256

Format
Input
A base b
A number n1
A number n2

Output
A number of base b equal in value to n2 - n1.
*/
#include<iostream>
using namespace std;
int getDifference(int b, int n1, int n2){
 
    int rv = 0;
    int carry = 0 ;
    int p = 1 ;
    while( n2 > 0) {
        int d1 = n1 % 10 ;
        n1 = n1/10;
        int d2 = n2 % 10  ;
        n2 = n2 / 10;
        
        int d = 0;
        d2 = d2 + carry ;

        if ( d2 >= d1) {
           
           carry = 0 ;
           d = d2 - d1 ;
        }else
        {
            carry = -1;
            d = d2 + b - d1 ;
        }

        rv = rv + d * p;
        p = p* 10;

         
    }
    return rv;
    
}


int main(){
    int b, n1, n2;
    cin>>b>>n1>>n2;
    cout<<getDifference(b,n1,n2)<<endl;
    
}
