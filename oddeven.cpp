#include<bits/stdc++.h>
using namespace std;
bool kt(string x)
{
    for(int i=0;i<x.size();i++)
    {
        if(i%2==0 && (x[i]-48)%2==0 || i%2==1 && (x[i]-48)%1==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    long long n;
    string x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(kt(x)==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
