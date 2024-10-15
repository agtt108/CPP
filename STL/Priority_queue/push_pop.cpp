#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main()
{
    int size;
    cout<<"enter vector size:"<<endl;
    cin>>size;
    vector<int>vt(size);
    cout<<"enter vector elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>vt.at(i);
    }
    cout<<endl;
    priority_queue<int>pq;
    cout<<"push vector element in priority queue:"<<endl;
    for(auto x:vt)
    {
        pq.push(x);
    }
    cout<<"priority queue element:"<<endl;
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}