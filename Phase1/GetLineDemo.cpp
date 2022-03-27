#include<iostream>
using namespace std;
int main(){
    //add @40 if string has space
    string str = "my name is leelananda";
    
    
    for(int j=0; j<str.length() ;j++){
        if(str[j]==' '){
            
            str.insert(j,1,'0');
            str.insert(j,1,'4');
            str.insert(j,1,'@');
            
        }
    }
    cout<<str<<endl;
}