#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);
    cout<<"queue size:"<<qu.size()<<endl;
    if(qu.empty())
    {
        cout<<"queue is empty:"<<endl;
    }
    else
    {
        cout<<"queue is not empty:"<<endl;
    }
    cout<<"front element of queue:"<<qu.front()<<endl;
    cout<<"back element of queue:"<<qu.back()<<endl;
    cout<<"queue elements:"<<endl;
    while(!qu.empty())
    {
        cout<<qu.front()<<" ";
        qu.pop();
    }
    cout<<endl;
}