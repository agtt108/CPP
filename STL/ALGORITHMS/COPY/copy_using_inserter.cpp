#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int size;
    cout<<"enter vector size:"<<endl;
    cin>>size;
    vector<string>str(size),str2;
    vector<string>::iterator it;
    cout<<"enter vector string data:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>str.at(i);
    }
    cout<<endl<<endl;
    cout<<"vector string data:"<<endl;
    for(auto x:str)
    {
        cout<<x<<endl;
    }
    cout<<endl<<endl;
    cout<<"copy vector string data to an another vector:"<<endl;
    cout<<endl;
    copy(str.begin(),str.end(),inserter(str2,it));
    cout<<"vector copied data:"<<endl;
    for(auto x:str2)
    {
        cout<<x<<" ";
    }
    cout<<endl<<endl<<endl;
}