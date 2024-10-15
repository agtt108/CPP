#include<iostream>
#include<map>
using namespace std;
int main()
{
    int size;
    cout<<"enter map size:"<<endl;
    cin>>size;
    map<int,string>mp;
    cout<<"enter map element:"<<endl;
    for(int i=0;i<size;i++)
    {
        int key;
        string str;
        cout<<"int key:"<<endl;
        cin>>key;
        cout<<"string data:"<<endl;
        cin>>str;
        mp.insert(pair<int,string>(key,str));
    }
    cout<<endl;
    cout<<"map size:"<<mp.size()<<endl;
    cout<<"map elements:"<<endl;
    map<int,string>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<"key->"<<it->first<<"   "<<"data->"<<it->second<<endl;
    }
    cout<<endl;
}