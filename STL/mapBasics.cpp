#include<bits/stdc++.h>
using namespace std;
int main(){

    ///// MAP ->>>>> IMPLEMENTS AVL TREE
    // key value pairs
    // Time complexity of Map is log(n)
    // Multiple values can be assigned to diff keys
    // MAP ONLY STORES UNIQUE KEYS
    // Map stores the values lexographically



    map<string, int> mpp;
    mpp["Abhishek"]=21;
    mpp["Sai"]=45;
    mpp["Tupe"]=54;
    mpp["World"]=11;
    mpp["Abhay"]=14;

    mpp["Sai"]=99; // The value of sai gets overrided : 45 -> 99

    mpp.emplace("raj",33);
    mpp.erase("raj"); //erase.(key)

    mpp.erase(mpp.begin()); //erase(iterator)
    mpp.clear();  // whole map is erased

    cout<<mpp.size()<<endl;

    mpp["Abhishek"]=21;
    mpp["Sai"]=45;
    mpp["Tupe"]=54;
    mpp["World"]=11;
    mpp["Abhay"]=14;


    /// PRINTING THE KEY VALUE OF MAP
    for(auto it:mpp){
        cout<<it.first<<" -> "<<it.second<<"\n";
    }
    cout<<"Operation 2"<<endl;
    for(auto it=mpp.begin();it!=mpp.end();it++){
        cout<<it->first<<" -> "<<it->second<<endl;
    }

    // unordered Map
    // O(1) -> almost All cases
    // O(n) -> worst case
    // doesnt store in any order
    // only store single keys
    // cannot store pairs in unordered maps



    // MULTI MAPS

    // 1. NO UNIQUE KEYS
    // 2. SORTED, MULTIPLE KEYS
    
    multimap<string,int> brace;

    brace.emplace("Rasal",11);
    brace.emplace("Tupe",88);
    brace.emplace("Abhay",44);
    brace.emplace("Tupe",77);

    return 0;

    

}