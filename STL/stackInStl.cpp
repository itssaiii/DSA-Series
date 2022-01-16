#include<bits/stdc++.h>
using namespace std;
int main(){


    // STACK :  LAST IN FIRST OUT (LIFO RULE)
    stack<int> st;
    // ### OPERATIONS ON STACKS FOR CP ###
    //pop
    // top
    // push
    // size
    // empty 
    // emplace
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(5);
    st.push(12);

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;


    st.push(233);
    cout<<"Initial " <<st.size()<<endl;

    bool flag = st.empty();
    cout<<flag<<endl;

    //Delete all element inside the stack
    while(!st.empty()){
        st.pop();
    }
    cout<<"After deleting all elements : "<<st.size()<<endl;
    
    return 0;
}