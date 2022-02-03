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
    string temp= str;
    int j=0;
    for(int i=0;i<temp.length();i++){
        temp[j] = tolower(temp[j]);
        if(temp[i]==' '){
            
            temp[i+1] = tolower(temp[i+1]);
            i++;
            continue;
        }
        else{
            temp[i] = toupper(temp[i]);
        }
    }

    cout<<temp<<endl;
}