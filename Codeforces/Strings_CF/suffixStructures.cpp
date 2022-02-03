#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string two;
    cin>>two;
    string temp="";
    int size_two = two.length();
    for(int i=0;i<str.length();i++){
        if(str.length()-i<two.length()){
            cout<<str +" "+ two<<endl;
            return;
        }
        temp = str.substr(i,size_two);
        if(temp==two){
            cout<<str<<endl;
            return;
        }
    }
    return 0;
}