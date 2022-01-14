// PRINT THE FOLLOWING PATTERN FOR ANY NUMBER
// 111
// 211121112
// 321112111232111211123 pATTERN


#include<bits/stdc++.h>
using namespace std;
void Process(int n);
int main(){
    int n;
    cout<<"Enter a number"<<"\n";
    cin>>n;
    Process(n);
    return 0;
}
void Process(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    Process(n-1);
    cout<<n<<" ";
    Process(n-1);
    cout<<n<<" ";
}