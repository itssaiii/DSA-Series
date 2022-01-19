#include<bits/stdc++.h>
using namespace std;
void Process(string str,vector<char> vec);
int main(){
    string str;
    cout<<"Enter a string"<<endl;
    getline(cin,str);
    string set = "qwertyuiopasdfghjklzxcvbnm";
    vector<char> vec (27);
    for(int i=0;i<set.length();i++){
        vec[i]=set[i];
        cout<<vec[i]<<"->";
    }
    Process(str,vec);
    return 0;
}
void Process(string str,vector<char> vec){
    for(int i=0;i<str.length();i++){
        str[i]=vec[i];
        cout<<str[i];
    }
}