#include<bits/stdc++.h>
using namespace std;
int Process(string str);
int main()
{
    string str;
    cout<<"enter a string"<<endl;
    getline(cin,str);
    int ans =Process(str);
    cout<<ans;
    return 0;
}

int Process(string str){
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            continue;
        }
        if(str[i]=='/'){
            i++;
            continue;
        }
        else{
            
        }
    }
    return 0;
}