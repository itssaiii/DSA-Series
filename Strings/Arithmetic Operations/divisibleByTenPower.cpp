#include<bits/stdc++.h>
using namespace std;
void Process(int n);
int main(){
    
    int n;
    cout<<"enter the number"<<"\n";
    cin>>n;
    Process(n);
    return 0;

}
void Process(int n){
    if(n==0){
        cout<<"0";
        return;
    }
    if(n%9!=0){
        cout<<n%9;
    }
    for(int i=0;i<n/9;i++){
        cout<<"9";
    }
    for(int i=0;i<n;i++){
        cout<<"0";
    }
    cout<<endl;


}