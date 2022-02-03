#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int up=0,low=0;
    for(int i=0;i<str.length();i++){
        if(islower(str[i])){
            low++;
        }
        else{
            up++;
        }
    }
    if(up==low || low>up){
        transform(str.begin(),str.end(),str.begin(),::tolower);
    }else{
        transform(str.begin(),str.end(),str.begin(),::toupper);
    }


    cout<<str<<"\n";
    
    return 0;
}