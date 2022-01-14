#include<bits/stdc++.h>
using namespace std;
int Process(int x,int n);
int main(){
    int n,x;
    cout<<"Enter the number"<<"\n";
    cin>>n;

    cout<<"Enter the power"<<"\n";
    cin>>x;

    int ans = Process(x,n);
    cout<<ans<<"\n";
    return 0;
}
int Process(int x,int n){
    if(x==0){
        return 1;
    }
    int nby2 = Process(x/2,n);
    int ans = nby2 *nby2;

    if(ans%2!=0){
        ans = ans * n;
    }
    return ans;
}