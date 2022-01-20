#include<bits/stdc++.h>
using namespace std;
void Process(string x,string str,int n);
int main(){
    string str;
    cout<<"enter a string"<<"\n";
    getline(cin,str);
    int n;
    cout<<"entter the number"<<endl;
    cin>>n;
    string x;
    Process(x,str,n);
    return 0;
}
void Process(string x,string str,int n){
    if(n==0){
        cout<<"New string is -> "<<x;
        return;
    }
    x = x + str;
    Process(x,str,n-1);
    
}