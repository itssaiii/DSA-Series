#include<bits/stdc++.h>
using namespace std;
void Process(string str);
int main(){

    // INSTEAD OF isPunc method

    string str;
    cout<<"enter the string"<<"\n";
    getline(cin,str);
    cout<<" old String is -> "<<str;
    Process(str);
    
    return 0;
}
void Process(string str){
    for(int i=0;i<str.length();i++){
        if('A'<=str[i] && str[i]<='Z'){
            continue;
        }
        else if('a'<=str[i] && str[i]<='z')
        {
            continue;

        }else if(str[i]==' '){
            continue;
        }
        else{
            str.erase(str.begin()+i);
            i--;  // MOST IMPORTANT CONDITION IN THIS WHOLE PROGRAM
            // cout<<"----------> "<<str<<" -----> i is at "<<i<<endl; --> TO CHEKC THE WORKING
        }
        
    }
    cout<<" New String is -> "<<str<<endl;

}