/*
1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are required to find the span of input. Span is defined as difference of maximum value and minimum value.

Constraints
1 <= n <= 10^4
0 <= n1, n2
 .. n elements <= 10 ^9

Format
Input
A number n
n1
n2
.. n number of elements

Output
A number representing max - min
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n , 0);
    for (int i=0 ; i<v.size() ; i++){
           cin>>v[i];
           
    }
    int maxi = v[0];
    int mini = v[0];
    for ( int i=0 ; i<v.size() ; i++) {
        if( v[i] > maxi){
            maxi = v[i];
            
        }
        if( v[i] < mini){
            mini = v[i];
        }
    }
    int span = maxi - mini;
    cout<<span;

}
