#include<bits/stdc++.h>
using namespace std;


char maxocc(string s)  {
  int arr[26] = {0};
  for(int i=0; i<s.size(); i++){
     
      int number = 0;
      if(s[i] >='a' && s[i] <='z' ){//checking for lowercase 
          number = s[i] - 'a';//finding the index value to be increased
      }else{
          number = s[i] - 'A';//if upper case
        }
        arr[number]+=1;//we got index number now increasing it
    }
    int maxi = -1;
    int ans = 0;
    for(int i= 0 ; i<26; i++){//finding max occurance number;
       if(arr[i]>maxi){
           maxi = arr[i];
           ans = i;//storing the index of the max occurance :)
       }
    }
    
    return 'a'+ans;

}
int main(){
    char ch = maxocc("lee");
    cout<<ch<<endl;
    
    return 0;
}