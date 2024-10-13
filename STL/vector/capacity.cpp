#include<iostream>
#include<vector>
#include<array>
using namespace std;
int main()
{
    vector<int>vec(5);
    int i;
    cout<<"enter vector elements"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>vec.at(i);
    }
    cout<<endl;
    cout<<"vector elements"<<endl;
    for(auto i:vec)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of vector:"<<vec.size()<<endl;
    cout<<"push one element at last of vector:"<<endl;
    vec.push_back(12);
    cout<<"size of vector:"<<vec.size()<<endl;
    cout<<"capacity of vector:"<<vec.capacity()<<endl;
}