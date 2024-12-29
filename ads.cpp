#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long  a,b,m,s=0;
    cin>>a>>b>>m;
    for(long long i=a;i<=b;i++)
    {
        s=(s+(i%m*i%m)%m)%m;
    }
    cout<<s;
}
