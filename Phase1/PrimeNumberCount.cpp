#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
//this method is called sieve of eratosthesis ;
    int countPrimes(int n) {
        int count = 0;//count to check the number of prime elements
        vector<bool> prime(n+1,true);//vector initially considered as all number are prime
        prime[0]=prime[1]=false;//0 and 1 are not prime so marking as prime
        
        for(int i =2;i<n;i++){//iterating till n
            if(prime[i]){
                count++;
                for(int j=2*i ;j<n ;j=j+i){//marking all the factors of i as not prime
                    prime[j]=0;//marking as false
                }
            }
        }
        return count;
        
    }
};

int main()  {



    return 0;
}
