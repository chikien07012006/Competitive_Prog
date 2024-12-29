#include<bits/stdc++.h>
using namespace std;
long long a[200000];
int main()
{
    ios_base::sync_with_stdio(0);
    long long c,b;
    cin>>c>>b;
    for(long long i=2;i<=200000;i++)
    {
        if(a[i]==0)
        for(long long j=i*2;j<=20000;j=j+i)
        {
            a[j]=1;
        }
    }
    for(long long i=c;i<=b;i++)
    {if(i!=1)
        if(a[i]==0)cout<<i<<endl;
    }
}
