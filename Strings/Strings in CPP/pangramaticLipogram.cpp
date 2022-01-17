#include<bits/stdc++.h>
using namespace std;
void Process(string str);
int main(){
    string str;
    cout<<"enter the string"<<"\n";
    getline(cin,str);
    Process(str);
}
void Process(string str){
    vector<bool> vec(26,false);
    int index;
    for(int i=0;i<str.length();i++){
        if('A'<=str[i] && str[i]<='Z'){
            index = str[i] - 'A';
            cout<<str[i]<<" -> True"<<endl;
            vec[index] = true;
        }
        else
        if('a'<=str[i] && str[i]<='z'){
            index = str[i] - 'a';
            cout<<str[i]<<" -> True"<<endl;
            vec[index] = true;
        }
        else{
            continue;
        }
    }
    int count=0;
    for(int i=0;i<vec.size();i++){
        if(vec[i]==false){
            count++;
        }
    }
    if(count==0){
        cout<<"Pangram"<<"\n";
    }
    else if(count>1){
        cout<<"Lipogram"<<"\n";
    }
    else{
        cout<<"Pangramatic Lipogram"<<"\n";
    }
}