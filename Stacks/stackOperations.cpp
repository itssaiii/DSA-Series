#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    cout<<st.top()<<" -> "<<st.size()<<endl;

    st.push(20);
    cout<<st.top()<<" -> "<<st.size()<<endl;

    

    st.push(30);
    cout<<st.top()<<" -> "<<st.size()<<endl;

    st.push(40);
    cout<<st.top()<<" -> "<<st.size()<<endl;

    st.push(50);
    cout<<st.top()<<" -> "<<st.size()<<endl;

    st.pop();
    cout<<st.top()<<" -> "<<st.size()<<endl;

    st.pop();
    cout<<st.top()<<" -> "<<st.size()<<endl;
    st.pop();
    cout<<st.top()<<" -> "<<st.size()<<endl;
    st.pop();
    cout<<st.top()<<" -> "<<st.size()<<endl;


    return 0;
}