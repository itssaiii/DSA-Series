#include<bits/stdc++.h>
using namespace std;
int main(){

    /// MULTISET log(n)->size
    /// Stores all elements in sorted fashion - > unique jaisa kuch nahi
    //// all same operations

    multiset<int> ms;

    cout<<"Before -> "<<ms.size()<<endl;
    ms.emplace(1);
    ms.emplace(1);
    ms.emplace(25);
    ms.emplace(2);
    ms.emplace(3);
    cout<<"After -> "<<ms.size()<<endl;
    // Print elements inside the multiset
    for(auto it:ms){
        cout<<it<<" ";
    }
    
    multiset<int> ms2;
    ms2.clear(); //CLEARS WHOLE SET


    cout<<"\n";
    // ms-> {1,1,2,3,25} -> Ascending order always

    // FIND A SPECIFIC ELEMENT
    auto it = ms.find(25);
    cout<<"Element found "<<*it<<endl;


    // erasing 
    ms.erase(ms.begin(),ms.end());
    cout<<"after erasing  "<<ms.size()<<endl;
    return 0;
}