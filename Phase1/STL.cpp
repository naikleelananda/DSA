#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<iterator>
using namespace std;
int main() {
    //basic array 
    int basic[5]={1,2,3,4,5};
    array<int,5> a = {1,2,3,4,5};
    for (int i=0 ; i<a.size() ; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"first and last element is : "<<a.front()<<" and "<<a.back()<<endl; 
//vector
    vector<int> v;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    vector <int> ab(4,7);
    for(int i=0;i<ab.size();i++){
        cout<<ab[i]<<" ";
    }
    cout<<endl;

  //deque
deque<int> de;
de.push_back(1);
de.pop_front();
de.push_front(2);

for(int i=0;i<de.size();i++){
    cout<<de.at(i)<<" ";
}

cout<<endl;
//list

list<int> l;
l.push_back(1);
l.push_front(2);

for(int i:l){
    cout<<i<<" ";
}
cout<<endl;

//stack
stack<string> s;
s.push("love");
s.push("babbar");
s.push("lee");
cout<<" top element is "<<s.top()<<endl;
s.pop();
cout<<" top element is "<<s.top()<<endl;
cout<<s.size()<<endl;
//queue

queue<string> q;
q.push("lee");
q.push("laa");
q.push("nanda");
q.pop();
cout<<q.size()<<endl;

//priority queue
//max heap
priority_queue<int> maxi;
//min heap
priority_queue<int,vector<int>,greater<int>> mini;
maxi.push(1);
maxi.push(2);
maxi.push(3);
maxi.push(0);
int n = maxi.size();

for(int i=0 ; i<n;i++) {
    cout<<maxi.top()<<" ";
    maxi.pop();
}
cout<<endl;
//min heap

mini.push(1);
mini.push(2);
mini.push(3);
mini.push(0);
int miniSize = mini.size();

for(int i=0 ; i<miniSize;i++) {
    cout<<mini.top()<<" ";
    mini.pop();
}

//set
set<int> s;
s.emplace(5);
s.emplace(2);





    return 0;
}