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
    int max;
    int index;
    vector<int> vec(26,0);
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            index = str[i] -'a';
            vec[index]++;
        }
    }
    max = 0;
    int max2 =0;
    for(int i=0;i<vec.size();i++){
        if(vec[i]>vec[i+1]){
            max2 = max;
            max = i;
        }
        else if(vec[i]>vec[max2] && vec[i]!=vec[max]){
            max2 = i;
        }

    }

    cout<<(char)str[max2+1]<<endl;
    

}