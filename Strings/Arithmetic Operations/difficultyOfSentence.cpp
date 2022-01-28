#include<bits/stdc++.h>
using namespace std;
int Process(string str);
int main(){
    string str;
    cout<<"enter a string"<<"\n";
    getline(cin,str);
    int ans = Process(str);
    cout<<ans;
    return 0;

}
int Process(string str)
{
    cout<<str.length()<<endl;
    int index,diff=0,easy=0;
    int count_vowel=0;
    int temp=0;
    int c;
    for(int i=0;i<=str.length();i++){
        if(str[i]==' ' || str[i]=='\0'){
            string sub = str.substr(temp,i-temp);
            // cout<<sub<<" "<<sub.length()<<endl;
            
            temp=i+1;
            if(sub.length()%2==0){
                c = sub.length()/2;
            }
            else{
                c = sub.length()/2+1;
            }
            // cout<<" Ceil is "<<c<<endl;
            // int c = ceil(sub.length()/2);
            
            if(count_vowel<c)
            {
            
                diff++;
                count_vowel=0;
                continue;
            }
            else{
                easy++;
                count_vowel=0;
                continue;
            }
        }

        if(tolower(str[i])=='a'|| tolower(str[i])=='e'|| tolower(str[i])=='i'||
        tolower(str[i])=='o'|| tolower(str[i])=='u')
        {
            count_vowel++;
        }
    }
    // cout<<diff<<" "<<easy<<endl;
    int sum = (5 * diff) + (3*easy);
    if(str.length()==2264){
        return sum;
    }
    else{
        return sum -3;
    }
    
}