#include<bits/stdc++.h>
using namespace std; // WITHOUT USING NAMESPACE, ONLY COUT WILL NOT WORK, std::cout will work instead of cout
namespace abhishek{  // SCOPE HOTA HAI YE EK    
    int value = 100;    
    int getVal(){ // initialized a function inside the namespace
        return value * 2;
    }        // SCOPE KA NAAM KUCH BHI HO SAKTA HAI
}

struct node{  // khudka ek data type : can inclide all datatypes
    string str;
    int num;
    double d;
    char x;
    
};


int main(){
    double value = 50.0;
    cout<<value<<"\n";
    cout<<abhishek::value<<endl;
    cout<<abhishek::getVal()<<"\n";


    //defining the struct in main function:

    // WRONG WAY OF DEFINING A STRUCT
    node abhi;
    abhi.d=11.11;
    abhi.str="Sai";
    abhi.num=33;

    return 0;
}  