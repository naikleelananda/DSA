//Input : 412
//output : four one two 
#include<iostream>
using namespace std;

void sayDigit( int n) {
   if ( n == 0){
       return ;
   }
   string arr[10] = {"zero" , "one" , "two" ,"three" , "four","five","six","seven","eight","nine"};
   int dig = n % 10 ;
   n = n/10 ;
   sayDigit(n);
   cout << arr[dig] <<endl;

}

int main() {
    int n;
    cin>> n ;
    sayDigit( n );

    return 0;
}