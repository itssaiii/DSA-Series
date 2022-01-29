#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"enter a string"<<endl;
    getline(cin,str);
    vector<string> vec;
    for(int i=0;i<str.length();i++){
        
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            vec[i]="";
            for(int j=0;j<=i;j++){
                vec[i]=vec[i] + '_';
            }
            
        }
        else{
            vec[i]=str[i]+"";
            
        }
    }

    for(auto itr:vec){
        cout<<itr<<" ";
    }
    return 0;
}