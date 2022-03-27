#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n = 23154;
    
    int inv = 0;
    int op = 1;
    
    while(n!=0) {
        int od = n%10;
        int id=op;
        int ip=od;
        
        
        inv = inv + od * pow(10,ip-1);
        op++;
        n=n/10;
        
    }
    cout<<inv<<endl;
    
    return 0;
}