#include<bits/stdc++.h>
using namespace std;
void Process(int n,int str);
int main(){
    
    int n;
    int x;
    cout<<"enter the number 1 "<<endl;
    cin>>n;
    cout<<"enter the number 2 "<<endl;
    cin>>x;
    
    Process(n,x);
    return 0;
}
void Process(int n,int x){
    vector<int> vec_min;
    vector<int> vec_max;
    int rem_min,rem_max;
    do{
        if(n>0)
        {
            rem_min = n%10;
            cout<<"REM IS -> "<<rem_min<<" ";
            if(rem_min%6==0){
                
                rem_min = 5;
                vec_min.push_back(rem_min);
            }
            else{
                vec_min.push_back(rem_min);
            }
            n=n/10;
        }
        if(x>0)
        {
            rem_max = x%10;
            cout<<"REM IS -> "<<rem_max<<" ";

            if(rem_max%6==0){
                rem_max = 5;
                vec_max.push_back(rem_max);
            }
            else{
                vec_max.push_back(rem_max);
            }
            x=x/10;
        }

    }while(n>0 && x>0);

    int sum_max=0,sum_min=0;
    int size1 = vec_min.size()-1;
    int size2 = vec_max.size()-1;
    int i=0,j=0;
    while(size1>=0 && size2>=0){
        if(size1>=0){
            sum_min = sum_min + vec_min[i] +pow(10,size1); 
            cout<<"No-> "<<vec_min[i]<<" ";
            size1--;
            i++;
        }
        if(size2>=0){
            sum_max = sum_max +vec_max[j] + pow(10,size2);
            cout<<"No-> "<<vec_max[j]<<" ";
            size2--;
            j++; 
        }
    }

    cout<<"Minimum Sum is "<<sum_min + sum_max<<"\n";
    cout<<"Maximum Sum is "<<sum_max<<"\n";



}