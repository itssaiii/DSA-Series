#include<bits/stdc++.h>
using namespace std;
int main(){
    // PRIORITY QUEUE <CONTAINS ALL ELEMENTS IN DESCENDING ORDER>
    // KEEPS MAX ELEMENT AT THE TOP <PRIORITY>
    //OPERATIONS OF PQ
    //push
    //size
    //top
    //pop
    //empty

    priority_queue<int> qpq; //USES THE CONCEPT OF HEAPIFY 
    qpq.push(1);
    qpq.push(7);
    qpq.push(3);
    qpq.push(8);
    qpq.push(11);
    qpq.push(2);

    cout<< qpq.top()<<endl; 

    // storing pair in queue

    priority_queue<pair<int,int>> ppq;

    // ascending order
    priority_queue<int> pq; //USES THE CONCEPT OF HEAPIFY 
    pq.push(-1);
    pq.push(-7);
    pq.push(-3);
    pq.push(-8);
    pq.push(-11);
    pq.push(-2);

    cout<<-1 * pq.top()<<endl;


    // using comparators
    priority_queue<int,vector<int>, greater<int>> r;
    r.push(1);
    r.push(7);
    r.push(3);
    r.push(8);
    r.push(11);
    r.push(2);

    cout<<" Using vector and comparator  ->  "<<pq.top()<<endl;



    return 0;
}