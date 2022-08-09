#include<bits/stdc++.h>
using namespace std;
int main(){
    //create a queue
    queue<int>q;

    q.push(11);
    q.push(89);
    q.push(12);
    q.push(90);
    cout<<"The front of the queue is : "<<q.front()<<endl;
    cout<<"The size of the queue is : "<<q.size()<<endl;

    q.pop();
    cout<<"The front of the queue is : "<<q.front()<<endl;
    cout<<"The size of the queue is : "<<q.size()<<endl;

    if(q.empty()){
        cout<<"The queue is empty ! "<<endl;
    }
    else{
        cout<<"The queue is not empty ! "<<endl;
    }


return 0;
}