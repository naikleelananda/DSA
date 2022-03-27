#include<iostream>
#include<vector>
#include<math.h>

using namespace std;
int main() {
    int n = 20;
    vector <bool> v (n,1);
    v[0]=v[1]=false;
    for(int i=2;i<n;i++ ){
        if(v[i]==1){
            for(int j=2*i;j<n;j+=i){
                v[j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<" index is " <<i<<" " <<v[i]<<endl;
    }
    return 0;
}