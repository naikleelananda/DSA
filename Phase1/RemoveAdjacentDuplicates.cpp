#include<iostream>
using namespace std;

int main() {
    string str="abbaca";
    string ans = "";
    for(int i= 0 ;i<str.length();i++){
        if(ans.length()==0){
            ans.push_back(str[i]);
        }else if(str[i]!=ans.back()){
            ans.push_back(str[i]);
        }else{
            ans.pop_back();
        }
    }
    cout<<ans<<endl;

    return 0;
}