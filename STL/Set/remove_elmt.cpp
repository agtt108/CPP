#include<iostream>
#include<set>
using namespace std;
int main()
{
    int size;
    cout<<"enter set size:"<<endl;
    cin>>size;
    set<int> st;
    cout<<"enter set element:"<<endl;
    for(int i=0;i<size;i++)
    {
        int vl;
        cin>>vl;
        st.insert(vl);
    }
    cout<<endl;
    cout<<"set elements:"<<endl;
    for(auto x:st)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    set<int ,greater<int>> stt;
    cout<<"set element in order:"<<endl;
    for(auto x:st)
    {
        stt.insert(x);
    }
    cout<<endl;
    for(auto x:stt)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"remove element in range:"<<endl;
    stt.erase(stt.begin(),stt.find(4));
    cout<<"set elements:"<<endl;
    for(auto x:stt)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
}