# include<bits/stdc++.h>
using namespace std;


int main(){

    vector<int> list;
    list.push_back(5);
    list.push_back(10);

    for(auto i = list.begin() ;  i != list.end(); i++){
        cout<< *i << " ";
    }
    for(int i = 0; i<list.size() ;i++){
        cout<< list[i] <<" ";
    }
    list.push_back(20);
    list.pop_back();

    // inserts 5 at the beginning 
    // v.insert(v.begin(), 5); 
// removes the first element 
    // v.erase(v.begin());
// erases the vector 
    // v.clear();

// reverse the vector 
// reverse(res.begin(), res.end());
//  sort(v.begin(), v.end());

// __gcd(6, 20);


    for(auto x: list){
        x = 30;
        cout<<x <<" ";
    }
    cout<< list.empty();

    vector<int> v[5];  // use full in graphs
    for (int i = 0; i < 5; i++) { 
  
        // Inserting elements at every 
        // row i using push_back() 
        // function in vector 
        for (int j = i + 1; j < 5; j++) { 
            v[i].push_back(j); 
        } 
    } 

    for (int i = 0; i < 5; i++) { 
  
        cout << "Elements at index "
             << i << ": "; 
  
        // Displaying element at each column, 
        // begin() is the starting iterator, 
        // end() is the ending iterator 
        for (auto it : v[i]) { 
  
            // (*it) is used to get the 
            // value at iterator is 
            // pointing 
            cout << it << ' '; 
        } 
        cout << endl; 
    } 
    
    return 0;
}
