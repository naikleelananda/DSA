#include<iostream>
using namespace std;
int fact(int n) {
    if(n==0 || n==1) {
        return 1;
    }
    int ans = 1;
    ans = n* fact(n-1);
    return ans;
}
void print(int n) {
    if(n==0) {
        return;
    }
    cout<<n<<endl;
    print(n-1);
}
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans =fib(n-1)+fib(n-2);
    cout<<ans <<endl;
}
void reachHome(int source ,int dest ) {

    if(source == dest ) {
        cout<< "destination reached "<<endl;
        return;
    }
    cout<<"source is "<<source<< " destionation is "<<dest<<endl;

    source++;

    reachHome(source,dest);

    cout<< "returning to stack one by one "<<source<<endl;


}

int main() {
    int n = 5;//op should be 120
    int f = fact(n);
    cout<<"ans is " << f<<endl;

   int source = 1;
   int dest = 10;


   reachHome(source,dest);


    return 0;

}