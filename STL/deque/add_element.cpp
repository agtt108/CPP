// deque is same as vector but in deque we can insert element data at both end in deque but in vector this feature not available
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    int size;
    cout<<"enter deque size:"<<endl;
    cin>>size;
    deque<int>dq(size);
    cout<<"enter deque element:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>dq.at(i);
    }
    cout<<endl;
    dq.deque::push_front(45);
    for(auto x:dq)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    dq.deque::insert(dq.begin()+3,50);
    dq.pop_front();
    for(auto x:dq)
    {
        cout<<x<<" ";
    }
    cout<<endl;

}