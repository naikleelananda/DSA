#include<bits/stdc++.h>
using namespace std;
int pivot(vector<int>& arr, int n ) {
    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;
    while(start<end) {
        if(arr[mid]>=arr[0] ) {
           start=mid+1;
        }
        else{
            end=mid;
        }
        mid = start+(end-start)/2;
        
    }
    return start;

}

int binarySearch(vector<int>& arr, int start,int end,int k ) {
   
    int mid = start+(end-start)/2;
    while(start<=end) {
        if(arr[mid]==k){
            return mid;
        }
        if(k<arr[mid] ) {
           end=mid-1;
        }
        if(k>arr[mid]){
            start=mid+1;
        }
        
        mid = start+(end-start)/2;
        
    }
    return -1;
    

}
int findPosition(vector<int>& arr, int n, int k)
{
    
    int pivotIndex=pivot(arr,n);
    if(k>=arr[pivotIndex] && k<= arr[pivotIndex]){
        return binarySearch(arr,pivotIndex,n-1,k);
    }else{
        return binarySearch(arr,0,pivotIndex,k);
    }
    

}
int main(){
vector<int> arr={7,9,1,2,3};
int n=5;
int k=2;
cout<< "position is " << findPosition(arr,n,k)<<endl;
}

