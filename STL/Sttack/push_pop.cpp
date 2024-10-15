#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    cout<<"stack top element:"<<stk.top()<<endl;
    cout<<"stack size:"<<stk.size()<<endl;
    if(stk.empty())
    {
        cout<<"stack is empty:"<<endl;
    }
    else
    {
        cout<<"stack is not empty:"<<endl;
    }
    stk.push(50);
    stk.push(40);
    cout<<"stack size:"<<stk.size()<<endl;
    cout<<"stack top element:"<<stk.top()<<endl;
    cout<<"stack element:"<<endl;
    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
    cout<<endl;
}