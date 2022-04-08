/*


1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing elements of array a.
3. You are required to print a bar chart representing value of arr a.

Constraints
1 <= n <= 30
0 <= n1, n2, .. n elements <= 10

Format
Input
A number n
n1
n2
.. n number of elements

Output
A bar chart of asteriks representing value of array a

Example
Sample Input

5
3
1
0
7
5

Sample Output
			*		
			*		
			*	*	
			*	*	
*			*	*	
*			*	*	
*	*		*	*	

*/
#include<bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin>>n;
   vector<int> v(n);
   for( int i=0 ; i<n ; i++) {
       cin>>v[i];
   }
   int maxi = v[0];
   for(int i= 0 ; i<n ; i++){
        if(v[i] > maxi ){
            maxi = v[i];
        }
   }
   for( int floor = maxi ; floor >= 1 ; floor--){
       for(int i = 0 ; i < n ; i++){
           if( v[i] >= floor){
               cout<<"*\t";
           }else{
               cout<<"\t";
           }
       }
       cout<<endl;
   }
}
