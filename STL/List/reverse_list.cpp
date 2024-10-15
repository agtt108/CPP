#include<iostream>
#include<list>
using namespace std;
int main()
{
    int size;
    cout<<"enter list size:"<<endl;
    cin>>size;
    list<int>lst;
    cout<<"enter list elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        int val;
        cin>>val;
        lst.push_back(val);
    }
    cout<<"reversed list:"<<endl;
    lst.reverse();
    for(auto x:lst)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}