#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int size;
    cout<<"vector size:"<<endl;
    cin>>size;
    vector<int> vt(size);
    cout<<"enter vector elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>vt.at(i);
    }
    cout<<endl;
    cout<<endl;
    cout<<"vector elements:"<<endl;
    for(auto x:vt)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<endl;
    vector<int>vt2(size);
    cout<<"copy vector element based on conditions:"<<endl;
    copy_if(vt.begin(),vt.end(),vt2.begin(),[](int i){return i%2==0;});
    cout<<"copied vector elements:"<<endl;
    for(auto x:vt2)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<endl;
}