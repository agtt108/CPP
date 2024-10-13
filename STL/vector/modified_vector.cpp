#include<iostream>
#include<vector>
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
    cout<<"vector element"<<endl;
    for(auto x:vec)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"vector first element: "<<vec.front()<<endl;
    cout<<"vector last element: "<<vec.back()<<endl;
    int pos,pos1;
    cout<<"enter data to insert at specific position"<<endl;
    cin>>pos;
    vec.insert(vec.begin()+pos,22);
    cout<<"vector element"<<endl;
    for(auto x:vec)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"enter data to emplace at specific position"<<endl;
    cin>>pos1;
    vec.emplace(vec.begin()+pos1,45);
    cout<<"vector element after emplace at specific position:"<<endl;
    for(auto x:vec)
    {
   
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"emplace back:"<<endl;
    vec.emplace_back(63);
    cout<<"vector element after emplace back"<<endl;
    for(auto x:vec)
    {
   
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"pop back:"<<endl;
    cout<<"vector element after pop last element"<<endl;
    vec.pop_back();
    for(auto x:vec)
    {
   
        cout<<x<<" ";
    }
}