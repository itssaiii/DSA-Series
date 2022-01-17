#include<bits/stdc++.h>
using namespace std;
bool Process(string str);
int main(){
    string str;
    str = "The quick brown fox jumps over the lazy dog";
    cout<<"enter a string"<<"\n";
    getline(cin,str);
    bool flag = Process(str);
    if(flag==true){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}
bool Process(string str){
    vector<bool> vec (26,false);

    for(int i=0;i<str.length();i++){
        if('A'<=str[i] && str[i]<='Z'){
            int index = str[i] - 'A';
            cout<<str[i]<<" -> True"<<endl;
            vec[index] = true;
        }else 
        if('a'<=str[i] && str[i]<='z'){
            int index = str[i] -'a';
            cout<<str[i]<<" -> True"<<endl;
            vec[index] = true;
        }
        else{
            continue;
        }
        
    }
    for(int i=0;i<vec.size();i++){
        if(vec[i]==false){
            return false;
        }

    }
    return true;
}