#include<bits/stdc++.h>
using namespace std;
void Process(string str);
int main(){
    string str;
    cout<<"enter a string"<<"\n";
    getline(cin,str);
    Process(str);
    return 0;
}
void Process(string str){
    vector<bool> vec(26,false);
    int index;
    for(int i=0;i<str.length();i++){
        if('A'<=str[i] && str[i]<='Z'){
            index = str[i] - 'A';
            cout<<str[i]<<" -> True"<<endl;
            vec[index] = true;
        }
        else
        if('a'<=str[i] && str[i]<='z'){
            index = str[i] - 'a';
            cout<<str[i]<<" -> True"<<endl;
            vec[index] = true;
        }
        else{
            continue;
        }
    }
    int j=0;
    for(char i='a';i<='z';i++){
        if(vec[j]==false){
            
            cout<<i<<" ";
        }
        j++;
    }

}