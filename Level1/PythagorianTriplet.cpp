/*
1. You are required to check if a given set of numbers is a valid pythagorean triplet.
2. Take as input three numbers a, b and c.
3. Print true if they can form a pythagorean triplet and false otherwise.
*/

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int a,b,c;
    cin >> a >> b >> c;
    
    int max  = a;
	if (b > max ){
		max = b;
	}
	if(c > max){
		max = c;

	}

	if( max == a){
		if(a*a == ( (b*b) + (c*c))){
			cout<<"true"<<endl;
		}else{
			cout<<"false"<<endl;
		}
	}
	if ( max == b){
		if(b*b == ( (a*a) + (c*c))){
			cout<<"true"<<endl;
		}else{
			cout<<"false"<<endl;
		}


	}
	if(max == c){
		if(c*c == ( (a*a) + (b*b))){
			cout<<"true"<<endl;
		}else{
			cout<<"false"<<endl;
		}


	}

    
}
