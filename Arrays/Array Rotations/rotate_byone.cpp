#include<bits/stdc++.h>
using namespace std;
void Process(int a[],int n);
void Rotate(int a[],int d,int n);
void display(int a[],int n);
int main(){
    int n;
    cout<<"Enter the Number of Elements to be enetered"<<"\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element no "<<i<<"\n";
        cin>>a[i];
    }
    int d;
    cout<<"Enter the number of elements to be rotated"<<"\n";
    cin>>d;

    Rotate(a,d,n);
    return 0;
}

void Rotate(int a[],int d,int n){
    int count=d;
    if(d==0){
        display(a,n-1);
        return;
    }
    while(count--){
        Process(a,n);
    }
    display(a,n-1);
}

void Process(int a[],int x){
    int temp;
    temp=a[0];
    for(int i=0;i<x;i++){
        a[i]=a[i+1];
    }
    a[x-1]=temp;
}


void display(int a[], int n){
    for(int i=0;i<=n;i++){
        cout<<a[i]<<" ";
    }
}