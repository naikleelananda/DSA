//sum of two array add digit wise in another array :)
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n1,n2;
    cin>>n1;
    //taking first array input 

    int* a1 = new int[n1];
    for ( int i=0 ; i<n1 ; i++){
        cin>>a1[i];
    }

    cin>>n2;
    //taking second array input 
    int* a2 = new int[n2];

    for ( int i=0 ; i<n2 ; i++){
        cin>>a2[i];
    }
    // now finding max array for ans array
    int maxi = max(n1 , n2);
    int* ans = new int[maxi];

    //i and j pointers and k pointer for ans array
    int i = n1-1;
    int j = n2-1;
    int k = maxi-1;
    
    int carry = 0;
    while ( k >= 0){
        int sum = carry;

        //this wont work when i or j negetive so int sum = a1[i] + a2[j] + carry ;
        if( i >= 0){
            sum += a1[i];
        }
        if( j >= 0){
            sum += a2[j];//those case handled ;)
        }

        int q = sum / 10 ; //quotient 
        int r = sum % 10 ; //remainder
        ans[k] = r ;
        carry = q;
        i--;
        k--;
        j--;

    }
    if( carry != 0){
        cout<<carry<<endl;
    }

    //printing ans array 
    for( int i=0 ; i<maxi ; i++) {
        cout<<ans[i]<<endl;
    }
  

    return 0;
}