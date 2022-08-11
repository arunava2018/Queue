#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>d;
    d.push_front(12);
    d.push_back(23);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_front();
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_back();

    if(d.empty()){
        cout<<"The queue is empty : "<<endl;
    }
    else{
        cout<<"The queue is not empty : "<<endl;
    }


return 0;
}