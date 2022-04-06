#include<iostream>
#include<vector>

using namespace std;
int main() {

    int m;
    cin>>m;
    vector<int> arr1(m);
    for(int i=0 ; i<m ; i++){
        cin>>arr1[i];
    }

    int n;
    cin>>n;
    vector<int> arr2(n);
    for(int i=0 ; i<n ;i++) {
        cin>>arr2[i];
    }
   int ptr1 = arr1.size()-1;
   int ptr2 = arr2.size()-1;

   vector <int> ans ;
   int carry = 0;

   while (ptr1 >= 0 || ptr2 >= 0 || carry > 0 ){
         int sum = arr1[ptr1] + arr2[ptr2] + carry ;
         int d ;
         if( sum < 10){
             d = sum;
         }
         else{
             d = sum % 10 ;
             carry = sum / 10 ;
         }
         ans.push_back(d);
         ptr1--;
         ptr2--;
   } 
   while (carry > 0)
   {
       int d = carry % 10;
       ans.push_back(d);
       carry = carry/10;
   }
   if(carry > 0){
       ans.push_back(carry);
   }
   

   for( int i=ans.size()-1 ; i>=0; i--) {
       cout<<ans[i]<<" ";
   }
 

}