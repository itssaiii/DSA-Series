#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter a String"<<"\n";
    getline(cin,str);

    // CHARACTER FROM STRINGS
    char ch; 
    for(int i=0;i<str.length();i++){
        ch = str[i];
        cout<<ch<<" - ";
    }
    

    // SUBSTRINGS FROM THE GIVEN SRTRING
    string sub = str.substr(2);
    cout<<sub<<"\n";
    

    cout<<str<<"\n";
    return 0;
}