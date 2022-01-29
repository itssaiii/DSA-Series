#include<bits/stdc++.h>
using namespace std;
void Process(string str,string temp, int n);
void stl_library(string str);
int main(){
    string str,temp;
    cout<<"enter a string"<<endl;
    getline(cin,str);
    temp="";
    int n = str.length();
    Process(str,temp,n); // Recursion Method
    stl_library(str); // STANDARD TEMPLATE LIBRARY
    return 0;
}


void Process(string str,string temp,int n){
    if(n==0){
        cout<<temp;
        return;
    }
    temp = temp + str[n-1];
    Process(str,temp,n-1);
}
void stl_library(string str)
{
    reverse(str.begin(),str.end());
    cout<<str;
}