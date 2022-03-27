#include<bits/stdc++.h>
using namespace std;




bool isPossible(vector<int> &stalls,int mid , int k) {
    int cowcount=1;
    int cowpos=stalls[0];
    for(int i=1 ; i<stalls.size() ; i++) {
       
        if(stalls[i]-cowpos >= mid) {
            cowcount++;
             if(cowcount==k){
            return true;
        }
            cowpos=stalls[i];
        }
       
        
    }
    return false;
   
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int start = 0;
    int maxi = -1;
    for(int i=0 ; i<stalls.size() ; i++) {
        maxi=max(maxi,stalls[i]);
    }
    int end = maxi;
    
    int ans=0;
    int mid = start+(end-start)/2;
    while(start<=end) {
        if(isPossible(stalls,mid,k)){
            ans=mid;
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
int main() {
    vector<int> stalls = {0 ,3, 4, 7, 10, 9};
    int size = stalls.size();
    cout<<"Largest minimum distance that a cow can be placed is : "<<aggressiveCows(stalls,4);


    return 0;
}