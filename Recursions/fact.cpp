#include<bits/stdc++.h>
using namespace std;
int Process(int n);
int main(){
    int n;
    cout<<"ENTER THE NUMBER"<<"\n";
    cin>>n;
    int fact = Process(n);
    cout<<fact<<"\n";
    return 0;
}
int Process(int n){
     if(n==1){
         return 1;
     }
     int fn1 = Process(n-1);
     int fn = n * fn1;
     return fn;
     
     
}