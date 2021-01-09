#include<bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<int,int> map;

    unordered_map<int,int> :: iterator i;
    map[0]++;
    cout<<map[0]<<" ";
    cout<<map[1];

    if(map.find(0) != map.end()){
        cout<< map[0] <<endl;
    }
    for(i= map.begin();i!=map.end();i++){
        cout << i->first << "  " << i->second << endl; 
    }

    for(auto x: map){
        cout << x.first << "  " << x.second << endl; 
    }
    return 0;
}