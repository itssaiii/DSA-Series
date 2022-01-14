#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements u need"<<"\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element no "<<i<<"\n";
        cin>>a[i];
    }
    int size = sizeof(a)/sizeof(a[0]);
    sort(a,a+size);
    for(int i=0;i<n;i++){
        if(a[i]!=i){
            a[i]=-1;
        }
        
    }
    return 0;
}