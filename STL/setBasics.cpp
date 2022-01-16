#include<bits/stdc++.h>
using namespace std;
int main(){
    // when we need to find the number of Unique elements inside a an array SET is used

    // SET 
    // 1. Set is always there in an ascending order
    // 2. Cannot access elements of the set : set[0]

    // 3. Insert operation of set takes log(n) time : n-> No of elements
    // 4. to access set elements we need to use begin or end

    //LETS SEE AN EXAMPLE
    int arr[5]= {10,20,30,30,40};
    set<int> st;
    for(int i=0;i<5;i++){
        st.insert(arr[i]);
    }
    cout<<st.size()<<endl;

    // Erase Functionality
    // st = {10,20,30,40}

    st.erase(st.begin()); // st.erase(iterator) // st-> {20,30,40}
    // time complexity for erasing -> log(n)


    //st.erase(key)
    st.erase(40); // Deleting a Particular Element


    set<int> set1 = {1,1,1};
    cout<<"Before -> "<<set1.size()<<endl;
    set1.erase(set1.begin());
    cout<<"After -> "<<set1.size()<<endl; 

    auto it = st.find(20); // -> logn
    // auto it = st.find(190);// -> logn but then it points to st.end()- > 
                            // basically points to the index after last element
    // PRINTING THE ENTIRE SET
    st.insert(101);
    st.insert(222);
    // st.insert(7,9); Cannot do this 
    cout<<"After Inserting size -> "<<st.size()<<"\n";

    for(auto it =st.begin();it!=st.end();it++){
        cout<<*it<<" ";

    }
    cout<<endl;
    for(auto it: st){
        cout<<it<<" ";
    }
    cout<<endl;


    // erasing all elements from the set

    st.erase(st.begin(),st.end());
    st.size();


    /// UNORDERED SET
    unordered_set<int> un_set;
    un_set.insert(1);
    un_set.insert(300);
    un_set.insert(221);
    un_set.insert(3);

    for(auto it: un_set){
        cout<<it<<" ";
    }
    cout<<endl;


    ////NOTES : 
    // all operations are same
    // avg time complexity is constant in nature for unordered set O(1)

    // in Competitive coding
    // Preference 1. Unordered -> if no ascending
    // if tle then switch to ordered set

    // worst case is linear in nature - O(n)

    //Copy set into anotther set

    set<int> copy(st.begin(),st.end());
    cout<<copy.size()<<endl;
    cout<<"Copied Set"<<endl;
    for(auto it: copy){
        cout<<it<<" ";
    }
    cout<<endl;


    return 0;
}