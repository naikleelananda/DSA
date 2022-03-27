#include<bits/stdc++.h>
using namespace std;


void selectionSort(vector<int>& arr, int n)

{   
 
  for(int i= 0 ; i<n-1 ;i++) {
      int mini = i;
      for(int j=i+1;j<n;j++) {
          if(arr[j]<arr[mini]){
              mini=j;
          }
      }
      swap(arr[i],arr[mini]);
      
  }
}
int main() {

    vector<int> arr = {4,3,2,1};
    for(int i=0 ; i<arr.size() ;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selectionSort(arr,4);
    for(int i=0 ; i<arr.size() ;i++) {
        cout<<arr[i]<<" ";
    }


}
