#include<bits/stdc++.h>
using namespace std;
int Process(int x,int n);
int main(){
    int x;
    cout<<"Enter Number"<<"\n";
    cin>>x;
    int n;
    cout<<"Enter the number of times"<<"\n";
    cin>>n;
    int ans=Process(x,n);
    cout<<ans<<"\n";
    return 0;
}
int Process(int x,int n){

    if(n==0){
        return 1;
    }
    int xn1,xn;
    xn1 = Process(x,n-1); 
    xn = x * xn1;
    return xn;
}