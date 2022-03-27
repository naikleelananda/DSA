#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[],int m,int arr2[],int n,int arr3[],int k ){
    int i = 0;
    int j = 0;
    int l = 0;
  while(i<m && j<n) {
      if(arr1[i]<arr2[j]) {
          arr3[l]=arr1[i];
          i++;
          l++;
      }else{
          arr3[l]=arr2[j];
          j++;
          l++;
      }
  }
  //copying the remaining elements in the array
  while(i<m) {
      arr3[l]=arr1[i];
      i++;
      l++;
  }
   while(j<m) {
      arr3[l]=arr2[j];
      j++;
      l++;
  }
    

}

void print(int arr3[], int n){
    for(int i=0 ; i<n;i++) {
        cout<<arr3[i];
    }
}


int main() {

   //merge two sorted array
   int arr1[5] = {1,3,5,7,9};
   int arr2[3] = {2,4,6};

   int arr3[8] = {0};

   merge(arr1,5,arr2,3,arr3,8);

   print(arr3,8);


    return 0;
}
/*     code for not using extra space and merging in single array leet code question no 88
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int k = (m+n)-1;
        while(i>=0 && j>=0) {
            
            if(nums1[i]<nums2[j]) {
                nums1[k--]=nums2[j--];
            }else{
                nums1[k--]=nums1[i--];
            }
            
        }
        while(i>=0) {
            
            nums1[k--]=nums1[i--];
            
        }
        while(j>=0) {
            nums1[k--]=nums2[j--];
        }
    }
}*/