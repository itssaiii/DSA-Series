#include<bits/stdc++.h>
using namespace std;
int main(){

    //QUEUE : FIFO OPERATION

    // TIME COMPLEXITY : ALL BELOW OPERATIONS ARE O(1)
    // PUSH
    // FRONT
    // PO
    // SIZE
    // EMPTY

    // Only delete operation : O(n) -> Linear time
    queue<int> q;
    q.push(1);
    q.push(4);
    q.push(22);
    q.push(33);
    q.push(455);
    q.push(55);

    cout<<q.front()<<endl; //prints 1
    q.pop();
    cout<<q.front()<<endl; //prints 4

    //delete all elements in a queue
    while(!q.empty()){
        q.pop();
    }

    //DEQUEUE CONCEPT

    deque<int> deq; //similar to vector-> peeche se bhi daal sakte aur aage se bhi (samajh rahe ho na)
    // 1.pushfront
    // 2.pushback
    // 3.popfront
    // 4.popback
    // 5.begin,end,rend,rbegin
    // 6.empty
    //7.size,clear,at

    //better than vector

    // LIST CONCEPT
    list<int> ls;
     // 1.pushfront
    // 2.pushback
    // 3.popfront
    // 4.popback
    // 5.begin,end,rend,rbegin
    // 6.empty
    //7.size,clear,at
    //8.remove ->O(1)

    return 0; 