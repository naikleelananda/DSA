#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int number ;
    cin >> number;

    int ans = 0;
    int pos = 1;

    while(number != 0) {
  
    int dig = number % 10;

    ans = ans + pos * pow(10,dig-1);
    number = number/10;
    pos++;

    }
     cout << " ans is "<<ans;

    
    return 0;
} 
