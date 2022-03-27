#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverse(vector<vector<int>>& matrix,int row){
        int start = 0;int end = matrix[row].size()-1;
        while(start<=end){
            swap(matrix[row][start],matrix[row][end]);
            start++;
            end--;
        }
        
    }
    void rotate(vector<vector<int>>& matrix) {
        
        //two steps one is taking transpose means inter changing row and columns
        int row = matrix.size();
        int col = matrix[0].size();
        
        for(int i=0;i<row ;i++) {
            for(int j=0;j<i;j++){//running loop till diagonal only else we get old matrix
                
              if(i!=j){
                  swap(matrix[i][j],matrix[j][i]);
              }
            }
        }
        
        //done with taking transpose
        //now taking reverse for each row
        for(int i=0;i<row;i++){
            reverse(matrix,i);
        }
        
    }
};
int main()  {


    return 0;
}