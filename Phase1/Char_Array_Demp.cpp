#include<iostream>
using namespace std;
int getLength(char arr[]) {
    int count=0;
    for(int i=0 ; arr[i]!='\0';i++){
          count++;
    }
    return count;
}
void ReverseString(char arr[]){
    int s = 0;
    int e = getLength(arr)-1;
    while (s<e){
       swap(arr[s++],arr[e--]);
    }
   
   
}


int main() {
    
    char name[20]="leelananda";
    //cin>>name;
    cout<<name<<endl;
    cout<<"length of the char array is : "<<getLength(name)<<endl;
    ReverseString(name);
    cout<<"reversal of the array is : " <<name<<endl;
    
    string lee  = "leee";
    cout<<"length of lee is "<<lee.size()<<endl;
    
    
}