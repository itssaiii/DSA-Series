#include<bits/stdc++.h>
using namespace std;
int Process(int a[],int n,int x,int size);
int main(){
    int n;
    cout<<"Enter the number of elements"<<"\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element no "<<i<<"\n";
        cin>>a[i];
    }
    int x;
    cout<<"enter element to be found"<<"\n";
    cin>>x;
    int ans = Process(a,0,x,n);
    cout<<ans<<"\n";
    return 0;
}
int Process(int a[],int n,int x,int size){
    if(n==size){
        return -1;
    }
    if(a[n]==x){
        return n;
    }
    else{
        Process(a,n+1,x,size);
    }
}