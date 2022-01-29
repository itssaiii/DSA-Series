// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string str, int n){
        // code here
        vector<int> vec(26,0);
        for(int i=0;i<str.length();i++){
            if(str[i]==' '){
                continue;
            }
            int index;
            index = str[i]-'a';
            vec[index] = vec[index] +1;
        }
        sort(vec.begin(),vec.end(),greater<int>());
        
        int i=0;
        int sum=0;
        int j=0;
        int k=n;
        while(k--){
            vec[j] = vec[j] -1;
            k=k-1;
        }
        
        while(vec[i]!=0){
            sum = sum + pow(vec[i],2);
            i++;
        }
    
        return sum;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}  // } Driver Code Ends