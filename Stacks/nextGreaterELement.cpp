#include<bits/stdc++.h>
using namespace std;
void Process(stack<int> st, vector<int> vec);
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int x;
    vector<int> vec;
    for(int i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
    }
    stack<int> st;
    Process(st,vec);
    st.push(vec[0]);
    return 0;
}
void Process(stack<int> st,vector<int> vec)
{
    for(int i=1;i<vec.size();i++){

    }
}