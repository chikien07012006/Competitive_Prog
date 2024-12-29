#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,t=0,d=0;
    cin>>a>>b>>c; long long m[a];
    for(long long i=1;i<=a;i++) cin>>m[i];
    for(long long i=1;i<=a;i++)
    {
        for(long long j=i;j<=a;j++)
        {
            t=abs(t+m[j]);
            if(b<=t&&t<=c) d++;
        }
        t=0;
    }
    cout<<d+1;
}
