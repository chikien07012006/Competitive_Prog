#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,u=0,v=0,t=0,ma=0,u1,v1;
    cin>>n>>k; long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    while(v<=n  )
    {
        if(t<=k)
        {
            t=t+a[v];
            if(v-u+1>ma)
            {
                ma=v-u+1; v1=v;u1=u;
            }
            v++;
        }
        if(t>k)
        {
            t=t-a[u];
            u++;
        }
    }
    cout<<ma-1<<endl;
    for(int i=u1;i<=v1-1;i++) cout<<a[i]<<' ';
}
