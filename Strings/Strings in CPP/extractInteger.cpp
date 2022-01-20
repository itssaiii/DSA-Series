#include<bits/stdc++.h>
using namespace std;
void Process(string str);
int main(){
    string str;
    cout<<"enter a string"<<"\n";
    getline(cin,str);
    Process(str);
    return 0;
}
void Process(string str){
    for(int i=0;i<str.length();i++){
        if(isdigit(str[i])){
            cout<<str[i]<<" ";
        }
    }
}