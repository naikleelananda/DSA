/*Lumberjack Mirko needs to chop down M metres of wood. It is an easy job for him since he has a nifty new woodcutting machine that can take down forests like wildfire. However, Mirko is only allowed to cut a single row of trees.

Mirko‟s machine works as follows: Mirko sets a height parameter H (in metres), and the machine raises a giant sawblade to that height and cuts off all tree parts higher than H (of course, trees not higher than H meters remain intact). Mirko then takes the parts that were cut off. For example, if the tree row contains trees with heights of 20, 15, 10, and 17 metres, and Mirko raises his sawblade to 15 metres, the remaining tree heights after cutting will be 15, 15, 10, and 15 metres, respectively, while Mirko will take 5 metres off the first tree and 2 metres off the fourth tree (7 metres of wood in total).

Mirko is ecologically minded, so he doesn‟t want to cut off more wood than necessary. That‟s why he wants to set his sawblade as high as possible. Help Mirko find the m
aximum integer height of the sawblade that still allows him to cut off at least M metres of wood.
*/
#include<bits/stdc++.h>
using namespace std;

bool solve(int a[],int n , int m , int mid ) {
    int sum = 0;
    for(int i=0  ; i<n ; i++) {
        if(a[i]>mid){
            sum+=a[i]-mid;
        }
        if(sum>=m){
            return true;
        }
    }
    return false;
}


int main() {
   int n,m;
   cin>>n>>m;
   int a[n];
   for(int i=0 ; i<n;i++) {
       cin>>a[i];
   }
   int lb = 0;
   int ub=-1;
   int ans = 0;
   for(int i=0;i<n;i++) {
      ub+=max(ub,a[i]);
   }
   while(lb<=ub) {
      int mid = lb+(ub-lb)/2;
      if(solve(a,n,m,mid)){
          ans=mid;
          lb=mid+1;
      }else{
          ub=mid-1;
      } 
      mid = lb+(ub-lb)/2;
   }
   cout<<ans;


    return 0;
}