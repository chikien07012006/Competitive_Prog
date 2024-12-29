#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,m,x=0,t=1; string x1;
    cin>>x1>>n>>m;
    for(long long i=1;i<=x1.size()-1;i++)
    {
        t=t*10;
    }
    for(long long i=0;i<=x1.size()-1;i++)
    {
        x=x*10+(x1[i]-48);
    }
    for(long long i=1;i<=n;i++)
    {
        x=(x%m*t%m+x%m)%m;
    }
    cout<<x;
}
