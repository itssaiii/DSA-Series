#include<bits/stdc++.h>
using namespace std;
void Process(string str);
int main(){
    string str;
    cout<<"Enter a string"<<endl;
    getline(cin,str);
    Process(str);
    return 0;
}
void Process(string str){
    
                    // IF STRING GIVEN HAS COMPULSORY UPPERCASE AS INITIAL
                            // for(int i =0;i<str.length();i++){
                            //     if(isupper(str[i])){
                            //         vec.push_back(str[i]);
                            //     }
                            // }
    // ELSE->
    cout<<(char)toupper(str[0])<<" ";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            cout<<(char)toupper(str[i+1])<<" ";
            
        }
        else{
            continue;
        }
    }
}