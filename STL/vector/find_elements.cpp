#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size;
    cout<<"enter vector size"<<endl;
    cin>>size;
    vector<int>vt(size);
    cout<<"enter vector elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>vt.at(i);
    }

    int flag=0,data;
    cout<<"enter element for check:"<<endl;
    cin>>data;
    for(auto x:vt)
    {
        if(x==data)
        {
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"given data is available:"<<endl;
    else
        cout<<"given data is not available:"<<endl;
}