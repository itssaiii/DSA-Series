#include<bits/stdc++.h>
using namespace std;
int main()
{
    
        string str;
        cin>>str;
        vector<int> vec;
        vector<char> plus;
        for(int i=0;i<str.length();i++){
            if(str[i]=='+'){
                plus.push_back('+');
            }
            else{
                vec.push_back(str[i]-'0');
            }
        }
        sort(vec.begin(),vec.end());
        int size = plus.size();
        for(auto itr: vec){
            cout<<itr;
            if(size>0){
                cout<<plus[size-1];
                size--;
            }
        }

    return 0;
}