#include<bits/stdc++.h>
using namespace std;
void Process(string str);
int main()
{
    string str;
    cout<<"enter a string"<<endl;
    getline(cin,str);
    Process(str);
    return 0;
}
void Process(string str){
    for(int i=0;i<str.length();i++){
        if(tolower(str[i])=='a' || tolower(str[i])=='o' ||  tolower(str[i])=='e' || tolower(str[i])=='u' || tolower(str[i])=='i')
        {
            str.erase(i,1);
            i--;
        }
    }
    cout<<str<<endl;
}