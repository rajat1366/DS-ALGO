#include<bits/stdc++.h>
using namespace std;

int main(){
    //max heap
    priority_queue<int> p;
    p.push(5);
    p.push(1);
    p.push(3);

    while(p.empty() == false ){
        cout<<p.top()<<endl;
        p.pop();
    }

    //min heap
    priority_queue<int,vector<int>,greater<int>> q;
    q.push(5);
    q.push(1);
    q.push(3);
    while(q.empty() == false){
        cout<< q.top()<< endl;
        q.pop();
    }

    return 0;
}