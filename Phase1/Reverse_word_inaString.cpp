#include<bits/stdc++.h>
using namespace std;
//function to reverse the array
void reverseString(char arr[],int start , int end ){
  while (start<=end)
  {
    swap(arr[start],arr[end]);
    start++;
    end--;
  }

}
void printing(char arr[],int start,int n) {
    for(int i= 0 ; i<n ;i++){
        cout<<arr[i];
    }
}

int main() {


    char arr[12]={'b','o','o','k',' ','i','s',' ','m','i','n','e'};
    reverseString(arr,0,11);
    printing(arr,0,12);
    cout<<endl;
    int  n = 12;
    int i=0;
    for(int j= 0 ;j<12;j++){
        if(arr[j]==' '){
            reverseString(arr,i,j-1);
            i=j+1;
        }
        
    }
    reverseString(arr,i,11);
    printing(arr,0,12);
    
        
 }
