#include<bits/stdc++.h>
using namespace std;
int Process(int a[],int n);
int main(){
    int n;
    cout<<"Enter the number of elements"<<"\n";
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cout<<"Enter element no "<<i<<"\n";
        cin>>a[i];
    }
    int ans = Process(a,n-1);
    cout<<ans<<"\n";
    return 0;

}
int Process(int a[],int n){
    if(n<0){
        return 0;
    }
    int max = Process(a,n-1);
    if(max<a[n]){
        max=a[n];
    }
    return max;
    
}