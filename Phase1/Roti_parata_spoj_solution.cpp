#include<iostream>
#include<vector>
using namespace std;
bool isPossible(vector<int> &rank, int mid,int cooks,int dishes )  {
    int time = 0;
    int parata = 0;
    for (int i= 0 ;i<cooks ;i++) {
        time = rank[i];
        int j = 2;
        while(time<=mid){
            parata++;
            time = time + rank[j]*j;
            j++;
        }
        if(parata>=dishes) {
            return true;
        }
        
    }
    return false;
}


int minCookTime(vector<int> &rank, int m)
{
    int dishes = m;
    int cooks = rank.size();
    int start = 0;
    int end = 1e8;
    int ans = 0;
    int mid = start + (end - start )/2;
    while(start<=end) {
        
        if(isPossible(rank,mid,cooks,dishes)){
            ans = mid ;
            end = mid - 1;
        }else{
            start = mid +1;
            
        }
        mid = start + (end - start )/2;
    }
    return ans ;
}
int main() {
    vector<int> rank={}
}
