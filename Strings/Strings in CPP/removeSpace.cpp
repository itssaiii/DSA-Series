#include<bits/stdc++.h>
using namespace std;
void Process(string str);
int main(){
    string str;
    cout<<"Enter a string"<<endl;
    getline(cin,str);
    Process(str);
    return 0;
    
}
void Process(string str){
    int index;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            str.erase(str.begin()+i);
            i--;
        }
        
    }
    for(int i=0;i<str.length();i++){
        cout<<str[i];
    }
}
