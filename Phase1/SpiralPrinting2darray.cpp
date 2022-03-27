#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int row = matrix.size();//to find row size
        int col = matrix[0].size();//column size getting
        
        
       
        int count = 0;//to track when we have to exit from the loop
        int total = row*col; //total number of elements
        
        //indexes
        int startrow= 0;
        int endrow = row-1;
        int startcol = 0;
        int endcol = col-1;
        //ans vector
        vector<int> ans;
        while(count<total) {
            
            //printing starting row
            for(int index = startcol;count<total && index<=endcol;index++){//from start column to ending column adding one extra count<total everywhere to bcz sometimes one for loop will run which cause error
                ans.push_back(matrix[startrow][index]);
                count++;
            }
            //as loop ends increase the starting index
            startrow++;
            
            //printing end column
            for(int index = startrow;count<total && index<=endrow;index++){
                ans.push_back(matrix[index][endcol]);
                count++;
            }
            endcol--;///decreasing the starting column
            
            //printing ending row 
            for(int index =endcol;count<total && index>=startcol;index--){
                ans.push_back(matrix[endrow][index]);
                count++;
            }
            endrow--;//decreasing end row
        
        //print start column
        for(int index=endrow ;count<total && index>=startrow;index--){
            ans.push_back(matrix[index][startcol]);
            count++;
        }
        startcol++;
        }
        return ans;
        
        
    }
};


int main() {


    return 0;
}