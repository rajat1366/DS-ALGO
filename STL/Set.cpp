# include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(1);

    if(s.find(1) != s.end() ){
        cout<< "key found";
    } else {cout<< "not found";}

    return 0;
}