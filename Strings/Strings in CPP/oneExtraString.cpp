#include<bits/stdc++.h>
using namespace std;
void Process(string str, string term);
int main(){
    string str;
    cout<<"Enter a string"<<endl;
    getline(cin,str);
    string term;
    cout<<"Enter a string"<<endl;
    getline(cin,term);
    Process(str,term);
    return 0;
}
void Process(string str,string term ){
    vector<bool> vec (26,false);
    int index;
    for(int i=0;i<str.length();i++){
        if('a'<=str[i] && str[i]<='z')
        {
           
            index = str[i] - 'a';
            vec[index]=true;
        }
        
    }   

    int back;
        for(int i=0;i<term.length();i++){
            back = term[i] -'a';
            if(vec[back]==true){
                continue;
            }
            else{
                // vec[index]=true;
                cout<<"Konsa hai be ->>"<<endl;
                cout<<(char)term[i]<<endl;
            }
        }

}
