#include<bits/stdc++.h>
using namespace std;
void Process(int n,string str);
int main(){
    string str;
    int n;
    cout<<"enter the string"<<endl;
    getline(cin,str);
    cout<<"enter the number"<<endl;
    cin>>n;
    Process(n,str);
    return 0;
}
void Process(int n,string str){
    vector<int> vec(26,0);
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            continue;
        }
        int index;
        index = str[i]-'a';
        vec[index] = vec[index] +1;
    }
    sort(vec.begin(),vec.end(),greater<int>());
    
    int i=0;
    int sum=0;

    int j=0;
    int k=n;
    while(k--){
        vec[j] = vec[j] -1;
        k=k-1;
        j++;
    }
    
    while(vec[i]!=0){
        sum = sum + pow(vec[i],2);
        i++;
    }
    cout<<"Sum is -> "<<sum<<"\n"; 
}