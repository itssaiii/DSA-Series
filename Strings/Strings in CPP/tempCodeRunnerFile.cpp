#include<bits/stdc++.h>
using namespace std;
bool Process(string str);
int main(){
    string str;
    cout<<"Enter a string"<<endl;
    getline(cin,str);
    bool flag = Process(str);
    if(flag ==true){
        cout<<"Duck hai re baba"<<endl;
    }
    else{
        cout<<"Duck nahi hai baba"<<endl;
    }
    return 0;
}
bool Process(string str){
    int i=0;
    while(i<str.length() && str[i]=='0'){
        i++;
    }
    while(i<str.length()){
        if(str[i]=='0'){
            return true;
        }
        i++;
    }
    return false;
}