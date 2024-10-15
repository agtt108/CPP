#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    int size;
    cout<<"enter forward list size:"<<endl;
    cin>>size;
    forward_list<int>flt;
    cout<<"enter forward list elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        int vl;
        cin>>vl;
        flt.push_front(vl);
    }
    auto it=flt.begin();
    cout<<"push after specific data:"<<endl;
    it++;
    flt.insert_after(it,30);
    cout<<"modified data:"<<endl;
    for(auto x:flt)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}