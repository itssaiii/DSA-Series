// REVERSAL ALGORITHM APPROACH
#include<bits/stdc++.h>
using namespace std;
void Reverse(int a[],int left,int right);
void Rotate(int a[],int d,int n);
void display(int a[],int n);
int main()
{
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

    if(d==0){
        display(a,n-1);
        return;
    }
    else{
        Reverse(a,0,d-1);
        Reverse(a,d,n-1);
        Reverse(a,0,n-1);
        display(a,n-1);
    }
    
}
void Reverse(int a[],int left, int right){
    int temp;
    while(left<right){
        temp = a[left];
        a[left]=a[right];
        a[right]=temp;
        left++;
        right--;
    }
}
void display(int a[], int n){
    for(int i=0;i<=n;i++){
        cout<<a[i]<<" ";
    }
}