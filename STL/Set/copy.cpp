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
    cout<<"set1 element:"<<endl;
    for(auto x:st)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"copy set1 element into set2:"<<endl;
    st2=st;
    cout<<"set2 elements:"<<endl;
    for(auto x:st2)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<endl;
}