// list in cpp is nothing but double linked list
#include<iostream>
#include<list>
using namespace std;
void max_min(list<int> lt)
{
    int max,min;
    max=lt.front();
    min=lt.front();
    list<int>::iterator it;
    for(it=lt.begin();it!=lt.end();it++)
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
    cout<<"enter list size:"<<endl;
    cin>>size;
    list<int>st;
    cout<<"enter list elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        int vl;
        cin>>vl;
        st.push_back(vl);
    }
    max_min(st);
    cout<<endl;
}