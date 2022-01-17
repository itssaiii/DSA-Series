#include<bits/stdc++.h>
using namespace std;
void Process(string s,char t[],int index);
int main(){
    // copy string 
    // instead of strcpy()
    //using recursion and iteration
    string s;
    cout<<"Enter the string"<<"\n";
    cin>>s;
    char t[100];
    //Using iteration
    // int i=0;
    // for(i=0;i<s.length();i++){
    //     t[i]=s[i];
    //     cout<<s[i]<<" "<<t[i]<<" ";
    // }

    //Using Recursion
    Process(s,t,0);
    cout<<t<<endl;
    return 0;
}
void Process(string s,char t[100],int i){
    if(s[i]!='\0'){
        t[i]=s[i];
        Process(s,t,i+1);
    }
    else{
        return;
    }
    
}