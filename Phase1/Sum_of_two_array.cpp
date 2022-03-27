#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i=n-1;//pointing the last index
    int j=m-1;
    int carry=0;
    vector<int> ans;
    while(i>=0 && j>=0) {
        int sum = a[i]+b[j]+carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
        
    }
    //when size of 1st arrya is larger  1st case
    while(i>=0) {
        int sum = a[i]+carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
     //2nd case   size of 2nd array is larger 
    while(j>=0) {
        int sum = b[j]+carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    //3rd case where equal size 
    while(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
        
    
    reverse(ans.begin(),ans.end());
    return ans;
}
int main() {


}
