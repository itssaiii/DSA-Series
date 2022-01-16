#include<bits/stdc++.h>
using namespace std;
// if declaring array inside globally size of array max can be 10000000
int main(){
    // if declaring array inside int main size of array max can be 1000000 ->int,char,double
    // VECTORS

    // vectors are dynamic arrays

    vector<int> arr; // -> {} empty size
    cout<<arr.size()<<endl;
    arr.push_back(1); // ->{1}
    arr.push_back(2); // -> {1,2}
    cout<<arr.size()<<endl;
    arr.pop_back(); // -> Popping out last element entered
    cout<<arr.size()<<endl;

    arr.clear(); // --> erasing all the elements

    vector<int> vec(4,0); // -> {0,0,0,0} //-> creates a vector of size 4
     
     //inserting all elements of arr into another vector
     vector<int> base(arr.begin(),arr.end());  // -> [) 
     vector<int> temp(arr); //copying all elements

     // Trying out the attributes
    
    //EMPLACE BACK - > WORKS SAME AS PUSH-BACK BUT THEN
    // EMPPLACE BACK IS FASTER THAN PUSHBACK
    
     vector<int> abhi;
     abhi.push_back(1);
     abhi.push_back(3);
     abhi.push_back(5);
     abhi.push_back(7);
     abhi.push_back(9);
    // copying only first 2 elements inside the new vector 
    vector<int> sai(abhi.begin(),abhi.begin()+2);
    //OR
    // vector<int> sai(abhi.begin(),abhi.end()-2);



    // TO DEFINING 2D VECTORS
    vector<vector<int>> bill;
    // data type
    // vector<int> - > datatype is int
    // vector<vector<int>> -> datatype is vector<int> 
    vector<int> abhi1;
    abhi1.push_back(1);
    abhi1.push_back(3);
    abhi1.push_back(5);
    abhi1.push_back(7);
    abhi1.push_back(9);

    vector<int> sai1;
    sai1.push_back(10); 
    sai1.push_back(20);
    sai1.push_back(30);
    sai1.push_back(40);
    

    bill.emplace_back(abhi1);
    bill.emplace_back(sai1); 
    // these 2 statements store the following vectors -> abhi and sai into the new vector

    // Bill is the vector which contains all other vectors
    // what do we have to do to print Bill Vector {

        for(auto vec:bill){
            for(auto itr: vec){
                cout<<itr<<" ";
            }
            cout<<endl;
        }
    //}

    // Traditional way of Printing the items in vector
    for(int i=0;i<bill.size();i++){
        for(int j=0;j<bill[i].size();j++){
            cout<< bill[i][j]<<" ";
        }
        cout<<"\n";
    }


    //// DEFINE 10 X 20 VECTOR
    vector<vector<int>> anu(10, vector<int> (20,0));


    //// DEFINE ARRAY OF VECTORS
    vector<int> arra[4]; //every index will be a vector in itself



    //// DEFINE A 3D VECTOR 10 X 20 X 30 
    // vector<vector<vector<int>>> sir(10,vector<vector<int>> sir(20, vector<int> (30,0)));
    
    cout<<endl;
    //PRINTING ALL IN A VECTOR
    for(auto itr:abhi){
        cout<<itr<<" -> ";
    }
    


    return 0;
}