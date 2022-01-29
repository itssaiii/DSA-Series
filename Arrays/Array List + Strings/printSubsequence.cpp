#include<bits/stdc++.h>
using namespace std;
void Process(string str);
int main(){
    string str;
    cout<<"Enter the string"<<endl;
    getline(cin,str);
    Process(str);
    return 0;

}
void Process(string str){
    if(str.length() == 0){
        cout<<" "<<",";
        return;
    }
    char ch = str[0]; //1
    string res = str.substr(1); //2
    Process(res); //3
    
    
    
}