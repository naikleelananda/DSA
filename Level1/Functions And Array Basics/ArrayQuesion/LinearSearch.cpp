//simple linear Searching algorithm :)

#include<bits/stdc++.h>
using namespace std;

int find(vector<int> v , int d ){
    for( int i = 0 ; i<v.size() ; i++){
        if(v[i] == d){
            return i;
            break;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n , 0);
    for (int i=0 ; i<v.size() ; i++){
           cin>>v[i];
           
    }
    int d;
    cin>>d;
    cout<<find(v , d);

}