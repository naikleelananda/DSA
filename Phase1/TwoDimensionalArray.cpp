#include<iostream>
using namespace std;
int main() {
    //largest column sum
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int largi = -1;
    for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<3;j++) {
            sum+=arr[j][i];
        }
        if(sum>largi){
            largi=sum;
        }
       
    }
     cout<<"largest row sum is : "<<largi<<endl;

    return 0;
}