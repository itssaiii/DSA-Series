#include<bits/stdc++.h>
using namespace std;
array<int,3> globalArr; // -> {0,0,0} - > when globally created 0 will be stored
int main(){
    array<int,3> bill; // -> {?,?,?} garbage values will be stored when initialised inside int main

    array<int,5> arr_test= {1,2}; //-> {1,2,0,0,0} here all other are initiliazed with 0's
    array<int,3> ar1 = {0}; //->{0,0,0}

    array<int,5> a;
    a.fill(5); //Enter array gets filled with 5 - > {5,5,5,5,5}

    // Accesing the elements
    a.at(0);

    for(int i=0;i<5;i++){
        cout<<a.at(i)<<" ";
    } //PRINTING ALL VALUES OF THE CONTAINER ARRAY
    cout<<"\n";

    //Iterators
    //begin(),end(),rbegin(),rend()


    // begin() - > points to the 0th index adress
    // rbegin() -> points to the last index address (reverse of begin)
    // end() -> right after the end index -> points to the empty address
    // rend() -> reverse of end() -> right before the 0th index wala address

    array<int, 5> arr = {1,2,3,4,5};
    for(auto it = arr.begin();it<arr.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";

    // Here it is the pointer hence *it -> points to the value of that address
    //iterate through the array :
    //Basic for loop (1)
    //auto condition
    for(auto it= arr.rbegin();it!=arr.rend();it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
    // reverse print

    for(auto it=arr.end()-1;it>=arr.begin();it--){
        cout<<*it<<" ";
    }
    cout<<"\n";
    // it is not an iterator, it travels on the element itself
    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<"\n";

    // for string
    string s = "abhishek";
    for(auto c:s){
        cout<<c<<" ";
    }
    cout<<"\n";

    cout<<arr.size()<<"\n";
    cout<<arr.front()<<"\n";
    cout<<arr.back()<<"\n";
    

    return 0;
}