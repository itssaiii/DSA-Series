#include<bits/stdc++.h>
using namespace std;
std::vector<int> Process(int a[],int x,int n);
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

    vector<int> ans = Process(a,x,n-1);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    
    return 0;
}
std::vector<int> Process(int a[],int x,int n){
    
    if(n<0){
        return arr;
    }

    vector<int> arr;
    if(a[n]==x){
        arr.push_back(n);
        Process(a,x,n-1);
    }
    else{
        Process(a,x,n-1);
    }
    
}