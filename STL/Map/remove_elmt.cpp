#include<iostream>
#include<map>
using namespace std;
int main()
{
    int size;
    cout<<"enter map size:"<<endl;
    cin>>size;
    map<int,string>mp;
    cout<<"enter map elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        int key;
        string str;
        cout<<"int key: ";
        cin>>key;
        cout<<"string data: ";
        cin>>str;
        mp.insert(pair<int,string>(key,str));
    }
    cout<<endl;
    map<int,string>::iterator it,itt;
    cout<<"map elements:"<<endl;
    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<"key->"<<it->first<<"   "<<"value->"<<it->second<<endl;
    }
    cout<<endl;
    cout<<"remove one element at based on key:"<<endl;
    mp.erase(2);
    cout<<"key 2 data removed from map:"<<endl;
    cout<<"map elements after key 2 data removed:"<<endl;
    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<"key->"<<it->first<<"   "<<"value->"<<it->second<<endl;
    }
    cout<<endl;
    map<int,string>mpp(mp.begin(),mp.end());
    cout<<"removed data in range from begining to key 5:"<<endl;
    mpp.erase(mpp.begin(),mpp.find(5));
    for(it=mpp.begin();it!=mpp.end();it++)
    { 
        cout<<"key->"<<it->first<<"   "<<"value->"<<it->second<<endl;
    }
    cout<<endl;
}