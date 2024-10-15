#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int inc(int x)
{
    return x+1;
}
int main()
{
    int vt[]={14,85,69,45,26,34};
    int size=sizeof(vt)/sizeof(vt[0]);
    cout<<"apply unary operator increament(++):"<<endl;
    transform(vt,vt+size,vt,inc);
    cout<<"vector data after increament:"<<endl;
    for(auto x:vt)
    {
        cout<<x<<" ";
    }
    cout<<endl<<endl;
}