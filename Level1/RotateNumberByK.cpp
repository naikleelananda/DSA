/*

1. You are given two numbers n and k. You are required to rotate n, k times to the right. If k is positive, rotate to the right i.e. remove rightmost digit and make it leftmost. Do the reverse for negative value of k. Also k can have an absolute value larger than number of digits in n.
2. Take as input n and k.
3. Print the rotated number.
4. Note - Assume that the number of rotations will not cause leading 0's in the result. e.g. such an input will not be given
   n = 12340056
   k = 3
   r = 05612340
   
*/

#include <iostream>
#include<cmath>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    
    int nod = 0;
    int num = n;
    while( num != 0){
        num/=10;
        nod++;

    }
    k = k%nod;
    if( k < 0){
        k = k+nod;
    }
    int div = pow(10,k);
    int mul = pow(10,nod-k);//divisor and multiplyer

    int q = n/div;
    int r = n%div;//quotient and remainder 

    int ans = (r*mul)+q;
    cout<<ans<<endl;
    
   

}
