#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverse(vector<int>& nums, int start,int end) {
        
        while(start<end) {
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
        
    }
    void rotate(vector<int>& nums, int k) {
        if(k<0) {
            //handling negetive case
            
            k=k+nums.size();
            
        }else{
            //handling k size larger than array size
            k=k%nums.size();
        }
        int n=nums.size();
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
    }
};

//is array rotated and sorted ????????????
class Solution {
public:
    bool check(vector<int>& nums) {
        
        int count = 0;
        for(int i=1;i<nums.size();i++) {
            if(nums[i-1]>nums[i]){
                count++;
            }
           
        }
         if(nums[nums.size()-1]>nums[0]){
                count++;
            }
        
           return count<=1;                        
        
    }
};