#include<iostream>
#include<set>
using namespace std;
int main()
{
    int size;
    cout<<"enter size:"<<endl;
    cin>>size;
    set<int>st;
    set<int>st2;
    cout<<"enter set elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        int vl;
        cin>>vl;
        st.insert(vl);
    }
    cout<<endl;
    cout<<"enter set2 elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        int vl;
        cin>>vl;
        st2.insert(vl);
    }
    cout<<endl;cout<<endl;
    cout<<"set1 element:"<<endl;
    for(auto x:st)
    {
        cout<<x<<" ";
    }
    cout<<endl;cout<<endl;
    cout<<"set2 element:"<<endl;
    for(auto x:st2)
    {
        cout<<x<<" ";
    }
    cout<<endl;cout<<endl;
    st.swap(st2);
    cout<<"set1 element after swap:"<<endl;
    for(auto x:st)
    {
        cout<<x<<" ";
    }
    cout<<endl;cout<<endl;
    cout<<"set2 element after swap:"<<endl;
    for(auto x:st2)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<endl;
}