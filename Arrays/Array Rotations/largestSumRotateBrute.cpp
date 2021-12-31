#include<bits/stdc++.h>
using namespace std;
void Search(int a[],int max,int n);
void Rotate(int a[],int d,int n);
void Reverse(int a[],int left,int right);
void Sum(int a[],int n);
int main(){
    int n;
    cout<<"Enter the Number of Elements to be enetered"<<"\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element no "<<i<<"\n";
        cin>>a[i];
    }
    int s= sizeof(a)/sizeof(a[0]);
    int max = *max_element(a,a+s);
    Search(a,max,n);

    return 0;
}
void Search(int a[],int max,int n){
    int count;
    for(int i=0;i<n;i++){
        if(a[i]==max){
            count =i;
        }

    }
    Rotate(a,count+1,n); 
}
void Rotate(int a[],int d,int n){
    Reverse(a,0,d-1);
    Reverse(a,d,n-1);
    Reverse(a,0,n-1);
    Sum(a,n); 
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
void Sum(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum + (a[i] *i);
    }
    cout<<"The max sum is "<<sum<<"\n";
}
