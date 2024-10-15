// add two array using transform
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
    int  ar1[]={10,45,16,8,31};
    int  ar2[]={89,45,26,74,95};
    int size=sizeof(ar1)/sizeof(ar1[0]);
    int ar3[size];
    cout<<"add array ar1 and array ar2 and store array ar3:"<<endl;
    transform(ar1,ar1+size,ar2,ar3,plus<int>());
    cout<<"result:addition of two array:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<ar3[i]<<" ";
    }
    cout<<endl<<endl;
}