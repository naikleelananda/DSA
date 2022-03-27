#include<bits/stdc++.h>
using namespace std;
void update(int& n) {
    n = n+1;
}
int getsum(int* arr,int n) {
    int sum = 0;
    for(int i=0 ; i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main()  {
  

int i = 5;
int *p = &i;
int **p2 = &p;

int &j = i;
cout<<"value of i is "<<i<<endl;
i++;
cout<<" value of i  is "<<i<<endl;
j++;
cout<<" value of i  is "<<i<<endl;
int n = 5;
cout<<"before n value is "<<n<<endl;

update(n);//pass by reference

cout<<"after n value is "<<n<<endl;

int k;
cout<<"enter the value of n : "<<endl;
cin>>k;
int *arr = new int[k];
for(int i= 0;i<k;i++){
    cin>>arr[i];
}
cout<<"sum is "<<getsum(arr,k)<<endl;

    return 0;
}