#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vt(10);
    fill(vt.begin(),vt.end(),2);
    cout<<"vector elements:"<<endl;
    for(auto x:vt)
    {
        cout<<x<<" ";
    }
    cout<<endl<<endl;
    list<string>lt(15);
    fill(lt.begin(),lt.end(),"ajeet");
    cout<<"list elements:"<<endl;
    for(auto x:lt)
    {
        cout<<x<<" ";
    }
    cout<<endl<<endl;
}