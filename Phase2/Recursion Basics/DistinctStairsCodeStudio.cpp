/*
You have been given a number of stairs. Initially, you are at the 0th stair, and you need to reach the Nth stair. Each time you can either climb one step or two steps. You are supposed to return the number of distinct ways in which you can climb from the 0th step to Nth step.
*/

#include<iostream>
using namespace std;

int stairs( int n ){

   //base case 
   if ( n < 0){
       return 0;
   }
   if( n==0){
       return 1;
   }
   //R.C
   int ans = stairs( n-1) + stairs(n-2);
   return ans;
   //it will throw TLE error DP approch needed :)
}

int main() {

    int n = 10 ;
    cout << stairs( n) <<endl;

    return 0;
}