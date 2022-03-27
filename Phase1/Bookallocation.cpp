#include<iostream>
#include<vector>

using namespace std;
bool isallocation(vector<int> arr,int n,int m ,  int mid) {
    int pages = 0;
    int studentcount = 1;
    for(int i=0 ; i<n;i++) {
        if(arr[i] > mid ) {
            return false;
        }
        if(pages+arr[i] <= mid) {
            pages+=arr[i];
        }else{
            studentcount++;
            if(studentcount>m ) {
                return false;
            }else{
                pages=arr[i];
            }
        }
    }
    return true;

}
int allocateBooks(vector<int> arr,int n,int m) {
    //taking search space from 0 to sum of all element in an array
    int start = 0;
    int end = 0;
    for (int i=0 ; i<n ; i++) {//end is sum of all elements ;
        end += arr[i];
    }
    //taking mid and searching 
    //storing the temp ans ;
    int ans = 0;
    while(start <= end ) {
        int mid = start+(end-start)/2;
        if(isallocation(arr, n , m , mid)) {
            end=mid-1;
            //searching whether possible answer are left left side bcz right side is always has possible answer
        }else{
            ans = mid;//storing the temp ans 
            start=mid+1;

        }
        mid = start+(end - start)/2;

    }
    return ans;

}

int main() {
    vector <int> arr = {12,34,67,90};
    int n = arr.size();
    int students = 2;
    cout<<" minimum book allocated is " << 1+allocateBooks(arr,n,students);
    


    



    return 0;

}