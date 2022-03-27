#include<bits/stdc++.h>
using namespace std;
//function to check or convert to lowercase letter 
char toLowercase(char ch) {
    if((ch>='a' && ch<='z') ||(ch>=0 && ch<=9)){
        return ch;
    }else{
        ch= ch-'A'+'a';
        return ch;
    }
}
//function to check whether palindrome or not which returns boolean value;
bool isPalindrome(string s) {
    int start = 0;
    int end = s.size()-1;
    while(start<=end) {
        if(!isalnum(s[start])){//if character is alphanumeric start++ end end--;
            start++;
        }
        else if(!isalnum(s[end])){
            end--;
        }
        else if(toLowercase(s[start])!=toLowercase(s[end])){//checking lowercase of characters
            return false;
        }else{
          start++;//after checking for equality if equal start++ end--;
          end--;
        }
    }
    return true;
        
    }

int main(){

    return 0;
}