#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    string a;
    cin>>a;long long da=0,db=0,d=0;
    for(long long i=0;i<a.size();i++)
    {
        if(a[i]=='a')da++;
        if(a[i]=='b')db=db+da;
        if(a[i]=='c')d=d+db;
    }
    cout<<d;
}
