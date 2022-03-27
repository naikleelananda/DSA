#include<bits/stdc++.h>
using namespace std;



bool isPaintable(vector<int> &boards, int mid , int k) {
    int painters = 1;
    int time = 0;
    for (int i=0 ; i<boards.size() ; i++) {
        if(mid < boards[i]) {
            return false;
        } 
        if(time + boards[i] <= mid) {
            time += boards[i];
        }else {
            painters++;
            if(painters>k) {
                return false;
            }else{
                time = boards[i];
            }
        }
    }
    return true;
}


int findLargestMinDistance(vector<int> &boards, int k)
{
    int m = 0;int totalLength = 0;
    for (int i=0 ; i<boards.size();i++) {
        m = min(k,boards[i]);
        totalLength+=boards[i];
    }
    int start = m;
    int end = totalLength;
    while ( start <= end ) {
        int mid = start+ (end - start )/2;
        if(isPaintable(boards,mid,k)) {
            end = mid - 1;
        }else {
            start= mid +1;
        }
        mid = start + (end - start)/2;
    }
    return start;
}
int main() {
    vector<int> boards = {10,20,30,40};
    cout<<"min time requrired is : " << findLargestMinDistance(boards,2);
    return 0;
}