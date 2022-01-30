#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"enter a string"<<endl;
    getline(cin,str);
    string temp = str;
    reverse(temp.begin(),temp.end());
    if(str==temp){
        cout<<"Palindrome"<<"\n";

    }
    else{
        cout<<"Not a palindrome"<<"\n";
    }

    return 0;
}