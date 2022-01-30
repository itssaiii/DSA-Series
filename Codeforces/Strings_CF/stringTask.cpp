#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        vector<char> vec;
        for(int i=0;i<str.length();i++){
            if(str[i]==' '){
                continue;
            }
            if(tolower(str[i])=='a' || tolower(str[i])=='o' || 
                tolower(str[i])=='y' || tolower(str[i])=='e' ||
                tolower(str[i])=='u' || tolower(str[i])=='i'){
                continue;

            }else{
                vec.push_back('.');
                vec.push_back(tolower(str[i]));
            }
        }
        for(auto itr: vec){
            cout<<itr;
        }
        cout<<endl;
    }
    return 0;
}