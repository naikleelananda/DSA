#include<bits/stdc++.h>
using namespace std;


void bubbleSort(vector<int>& arr, int n)
{   
    for(int i= 0 ; i<n-1 ; i++) {
        
        for (int j= 0 ; j<n-i-1; j++) {
            if(arr[j+1]<arr[j]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main() {
    vector<int> arr={1,4,5,3};
    

    



    return 0;

}