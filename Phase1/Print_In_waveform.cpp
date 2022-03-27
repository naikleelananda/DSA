#include<bits/stdc++.h>
using namespace std;


vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for(int col=0;col<mCols;col++){//iteration through column
        if(col%2==0){//if even looping from top to botton
            for(int row=0;row<nRows;row++) {
                ans.push_back(arr[row][col]);
            }
        }else{
                //for odd index
                for(int row=nRows-1;row>=0;row--){
                    ans.push_back(arr[row][col]);
                }
            }
        }
    return ans;
    }
int main() {
    

    return 0;
}