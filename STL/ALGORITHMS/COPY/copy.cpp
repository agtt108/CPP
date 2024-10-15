#include<iostream>
#include<vector>
#include<cctype>
#include<cstring>
using namespace std;
int main()
{
    int size;
    cout<<"enter size:"<<endl;
    cin>>size;
    vector<char> ch(size),chh(size);
    cout<<"enter char in vector:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>ch.at(i);
    }
    cout<<endl;
    cout<<"vector one elements:"<<endl;
    for(auto x:ch)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"copy vector 1 element int vector 2:"<<endl;
    copy(ch.begin(),ch.begin()+ch.size(),chh.begin());
    cout<<endl;
    cout<<"vector one elements:"<<endl;
    for(auto x:ch)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"vector two elements copy of vector one:"<<endl;
    for(auto x:ch)
    {
        cout<<x<<" ";
    }
    cout<<endl<<endl;
}