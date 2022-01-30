#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        string temp="";
        int size=str.length();
        if(size>10){
            int c = size-2;
            temp = str[0] + to_string(c) + str[size-1];
            cout<<temp<<"\n";
        }
        else{
            cout<<str<<endl;
        }
        
    }
    return 0;
}