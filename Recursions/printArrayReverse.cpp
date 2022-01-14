#include<bits/stdc++.h>
using namespace std;
void Process(int a[],int n);
int main(){
    int n;
    cout<<"Enter the number of elements"<<"\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element no "<<i<<"\n";
        cin>>a[i];
    }
    Process(a,n-1);
    return 0;
}
void Process(int a[],int n){
    if(n<0){
        return;
    }
    cout<<a[n]<<" ";
    Process(a,n-1);
}