//fibonacii using recurison :)
#include<iostream>
using namespace std;
int fib( int n ){
    if( n== 0){
        return 0;
    }if(n == 1){
        return 1;
    }
    int ans = fib( n-1) + fib(n-2);
    return ans ;
}

int main() {

    cout<<"2nd fib is "<<fib(4);
}