/*
1. You are required to print the Greatest Common Divisor (GCD) of two numbers. 

2. You are also required to print the Lowest Common Multiple (LCM) of the same numbers. 

3. Take input "num1" and "num2" as the two numbers. 

4. Print their GCD and LCM.

*/
#include<iostream>
using namespace std;
int main(){
    int num1 ;
    int num2;
    cin>>num1>>num2;
    int dvd,div = 0;

    int big , small;
    if(num1 > num2) {
        dvd = num1;
        div = num2;
    }else{
        dvd = num2;
        div  = num1;
    }
    while( dvd % div != 0) {
        int rem = dvd%div; //looping dividend will diviosor and remainder will be diviosor .
        dvd = div;
        div = rem;


    }
    int lcm = (num1 * num2) / div;//formula for lcm (num1*num2)/gcd;
    cout<<"LCM is "<<lcm<<endl;
    cout<<"GCD is "<<div<<endl;

   


    return 0;
}


