#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q,t=0;
    cin>>n>>q;
    long long a[n],u[q],v[q];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=q;i++)
    {
        cin>>u[i]>>v[i];
    }
    for(int i=1;i<=q;i++)
    {
        for(int j=u[i];j<=v[i];j++)
        {
            t=t+a[j];
        }
        cout<<t<<endl;
        t=0;
    }
    return 0;
}
