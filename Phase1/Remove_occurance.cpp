#include<bits/stdc++.h>
using namespace std;

/*Input: s = "daabcbaabcbc", part = "abc"
Output: "dab"
Explanation: The following operations are done:
- s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
- s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
- s = "dababc", remove "abc" starting at index 3, so s = "dab".
Now s has no occurrences of "abc".*/

class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(s.length()!=0 && s.find(part)<s.length()){//string length should not be 0 and checking if part is present or not
            s.erase(s.find(part),part.length());        //if present than its length shoule be less than string length;
            //deleting that part find returns first occurance of 'abc'.
        }
        
        return s;
        
    }
};
int main(){

    return 0;
}