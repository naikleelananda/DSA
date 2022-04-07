//bubble sort algorithm :)
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;

    vector<int> arr(n);
    for ( int i=0 ; i<n ; i++) {
        cin>>arr[i];
    }

    for ( int i=0 ; i<n-1 ; i++) {
        bool swapper = false;

        for ( int j=0  ; j< n-i-1; j++){
            if( arr[j+1] < arr[j]){
                swap(arr[j+1] , arr[j]);
                swapper = true;
            }
        }
        if( !swapper){ // if already array is sorted ;)
            break;
        }
    }

    for( int i=0 ; i< n ;i++) {
        cout<<arr[i]<<",";
    }

    return 0;
}