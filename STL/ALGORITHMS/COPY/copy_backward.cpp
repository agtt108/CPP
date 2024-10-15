#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int size;
    cout<<"enter vector size:"<<endl;
    cin>>size;
    vector<int>vt(size),vt2(size);
    cout<<"enter vector elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>vt.at(i);
    }
    cout<<endl<<endl;
    cout<<"vector elements:"<<endl;
    for(auto x:vt)
    {
        cout<<x<<" ";
    }
    cout<<endl<<endl;
    cout<<"copy vector data into anothe vector:"<<endl;
    copy_backward(vt.begin(),vt.begin()+3,vt2.begin()+5);
    cout<<"copied data in an another vector:"<<endl;
    for(auto x:vt2)
    {
        cout<<x<<" ";
    }
    cout<<endl<<endl;
}