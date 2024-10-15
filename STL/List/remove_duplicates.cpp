#include<iostream>
#include<list>
#include<set>
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
    cout<<endl;
    cout<<"removed duplicates elements:"<<endl;
    set<int> unique_elements(lst.begin(),lst.end());
    lst.assign(unique_elements.begin(),unique_elements.end());
    for(auto x:lst)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}