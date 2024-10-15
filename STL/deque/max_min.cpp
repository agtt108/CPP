#include<iostream>
#include<deque>
using namespace std;
void max_min(deque<int> q)
{
    int max=q[0];
    int min=q[0];
    deque<int> :: iterator it;
    for(it=q.begin();it!=q.end();it++)
    {
        if(*it>=max)
        {
            max=*it;
        }
        if(*it<=min)
        {
            min=*it;
        }
    }
    cout<<endl;
    cout<<"max:"<<max<<endl;
    cout<<"min:"<<min<<endl;
}
int main()
{
    int size;
    cout<<"enter deque size:"<<endl;
    cin>>size;
    deque<int>dq(size);
    cout<<"enter deque elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>dq.at(i);
    }
    cout<<endl;
    max_min(dq);
}