#include<bits/stdc++.h>
using namespace std;
void Process(int a[],int n, int x);
void Sort(int a[],int size,int n,int x);

int main(){
    int n;
    cout<<"Enter the Number of Elements to be enetered"<<"\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element no "<<i<<"\n";
        cin>>a[i];
    }
    int x;
    cout<<"Enter the sum to  be calculted"<<"\n";
    cin>>x;
    int size;
    size = sizeof(a)/sizeof(a[0]);
    Sort(a,size,n,x);
    
    return 0;
}
void Sort(int a[],int size,int n,int x){
    sort(a,a+size);
    Process(a,n,x);
}
void Process(int a[],int n,int sum)
{
    int l,r;
    int count =0;
    l=0;
    r=n-1;
    while(l<r){
        if(a[l]+a[r]==sum){
            
            cout<<"Pair of element  exists"<<"\n";
            return;       
            }
        else if(a[l]+a[r]<sum){
            l++;
        }
        else{
            r--;
        }
    }
   cout<<"Pair of element doesn't exist"<<"\n";
} 

   