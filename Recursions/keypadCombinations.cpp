#include<bits/stdc++.h>
using namespace std;
vector<string> Process(string str,vector<string> vec);
int main()
{
    string str;
    cout<<"Enter the string"<<"\n";
    getline(cin,str);
    vector<string> vec;
    vec.push_back("?!");
    vec.push_back("abc");
    vec.push_back("def");
    vec.push_back("ghi");
    vec.push_back("jkl");
    vec.push_back("mno");
    vec.push_back("pqrs");
    vec.push_back("tu");
    vec.push_back("vwx");
    vec.push_back("yz");

    vector<string> ans = Process(str,vec);
    for(auto itr:ans){
        cout<<itr<<",";
    }
    return 0;
}
vector<string> Process(string str,vector<string> vec)
{
    if(str.length()==0){
        vector<string> bres;
        bres.push_back("");
        return bres;
    }
    
    char ch = str[0]; //

    string sub = str.substr(1); //

    vector<string> res = Process(sub,vec); //3
    vector<string> myres;
    string num = vec[ch-'0'];


    for(int i=0;i<num.length();i++)
    {
        char tom = num[i];\
        
        for(int j=0;j<res.size();j++){
            if(sub.length()==0){
                myres.push_back(tom + "");
            }else{
                myres[j]=tom + myres[j];
                cout<<myres[j]<<"\n";
            }
        }
    }

    for(auto itr: myres){
        cout<<itr<<"->";
    }

    return myres;


}