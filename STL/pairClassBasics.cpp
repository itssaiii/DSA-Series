#include<bits/stdc++.h>
using namespace std;
int main(){
    /// PAIR CLASS
    pair<int,int> pr = {1,2}; // here pr-> first = 1, pr->second = 2
    pair<pair<int,int>,int> pr1 ={{1,2},5}; //pr1->first  is a pair itself
    cout<<pr1.first.second<<endl;

    // when we need to  keep both pairs as first and second

    pair<pair<int,int>,pair<int,int>> both ={{1,2},{3,4}};
    cout<<both.first.first<<endl; // -> 1
    cout<<both.second.second<<endl; //-> 4


    // ALL POSIBIITIES
    // 1. PAIR IN A vector
    vector<pair<int,int>> vec;
    // 2. Pair in a set
    set<pair<int,int>> st;
    // 3. Pair in a map
    map<pair<int,string>,int> mpp;
    
    return 0;
}