#include<bits/stdc++.h>
using namespace std;
int Process(string str);
int main(){
    string str;
    cout<<"Enter a string"<<"\n";
    getline(cin,str);
    int ans  = Process(str);
    cout<<ans<<endl;
    return 0;
}
int Process(string str){
    vector<int> vec (26,0);
    int index;
    int x=0,y=0;
    for(int i=0;i<str.length();i++){
        index = tolower(str[i]) - 'a';
        cout<<char(str[i])<<" -> "<<index<<endl;
        vec[index]++;
    }
    for(int i=0;i<vec.size();i++){
        if(vec[i]==0){
            continue;
        }
        if((i+1)%2==1 && vec[i]%2==1){
            x++;
        }
        if((i+1)%2==0 && vec[i]%2==0){
            y++;
        }
    }
    return x+y;
}