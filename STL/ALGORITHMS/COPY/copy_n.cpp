#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int size;
    cout<<"enter vector size:"<<endl;
    cin>>size;
    vector<string> str(size);
    cout<<"enter vector string:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>str.at(i);
    }
    cout<<endl;
    cout<<"vector string data:"<<endl;
    for(auto x:str)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    vector<string>str2(size);
    int n;
    cout<<"enter how many data you want to copy:"<<endl;
    cin>>n;
    copy_n(str.begin(),n,str2.begin());
    cout<<"copied n number of data from str to str2:"<<endl;
    for(auto x:str2)
    {
        cout<<x<<" ";
    }
    cout<<endl<<endl<<endl;
}