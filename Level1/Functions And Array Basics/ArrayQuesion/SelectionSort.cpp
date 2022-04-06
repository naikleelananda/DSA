//Find the minimum element in unsorted array part and swap with element at beginning :)
#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n ; 
    cin>> n ;
    vector<int> v(n);
    for( int i=0 ; i<n ; i++){
        cin>>v[i];
    }
    for(int i=0 ; i<n-1; i++) {
        int min = i ;
        for( int j=i+1 ; j<n ; j++){
            if(v[j] < v[min]){
                  min = j;
            }
        }
        if( min != i){
            swap( v[i] , v[min]);
        }
        
    }

for( int i=0 ; i<n ; i++){
    cout<<v[i]<<" ";
}
}