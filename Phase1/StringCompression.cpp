#include<iostream>
#include<vector>
using namespace std;
//aaabbcc than op is : a 3 b 2 c 2 
class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index = 0;
        int i=0;
        while(i<n) {
            
            int j=i+1;//for comparing next char
            while(j<n && chars[i]==chars[j]){
                j++;//to check same characteer till where 
            }
            int count = j-i;//getting count value
            chars[index++]=chars[i];//storing the character first
            if(count>1) {//if count is two digit than hav to add sigle character in array so converting as string
                string cnt = to_string(count);
                for(int i=0;i<cnt.length();i++){
                    chars[index++]=cnt[i];//appending each character to chars array
                }
            }
            i=j;//changing the i position
        }
        return index;//returning the number of elements in the chars array;
    }
};

int main() {

    return 0;
}