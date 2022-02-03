#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string str;
    cin>>str;
    string name;
    cin>>name;
    string comp;
    cin>>comp;
    string temp=str+name;
  
    vector<int> vec(26,0);
    int index;
    
    for(int i=0;i<comp.length();i++){
        index = tolower(comp[i]) - 'a';
        vec[index]++;
    }
 
    
    for(int i=0;i<temp.length();i++){
        index = tolower(temp[i]) - 'a';
        if(vec[index]==0){
            vec[index]++;
        }
        else{
            vec[index]--;
        }
        
    }
  

    sort(vec.begin(),vec.end(),greater<int>());
   
    


    if(vec[0]>0){
        
        cout<<"NO"<<endl;
    }
    else{
        
        cout<<"YES"<<endl;
    }
   
    return 0;
}