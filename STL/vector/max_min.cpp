#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size;
    cout<<"enter size of vector:"<<endl;
    cin>>size;
    vector<int>vt(size);
    int i;
    cout<<"enter vector elements:"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>vt.at(i);
    }
    cout<<endl;
    cout<<"min amd max element of evctor:"<<endl;
    int min,max;
    min=vt[0];
    max=vt[0];
    for(auto x:vt)
    {
        if(x<=min)
        {
            min=x;
        }
        if(x>=max)
        {
            max=x;
        }
    }
    cout<<"min:"<<min<<endl;
    cout<<"max:"<<max<<endl;
}