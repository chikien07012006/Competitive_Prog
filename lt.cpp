#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll q[100000000];
ll gcd(ll a,ll b)
{
    ll tam;
    while(a>0){tam=a;a=b%a;b=tam;}
    return b;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll a,b,c,t=0,tam=1,res=0;
    cin>>a>>b>>c;
    for(ll i=2;i<=1000000;i++)
    {
        while(a%i==0){q[t]=i;t++;a=a/i;}
        while(b%i==0){q[t]=i;t++;b=b/i;}
        while(c%i==0){q[t]=i;t++;c=c/i;}
    }
    if(a>1){q[t]=a;t++;}if(b>1){q[t]=b;t++;}if(c>1){q[t]=c;t++;}
    t--;sort(q,q+t);ll i=0;
    while(i<=t)
    {
        tam=1;
            for(ll j=i+1;j<=t;j++)
            {
                if(q[j]==q[i])tam++;
                else break;
            }
            res=gcd(res,tam);i=i+tam;
    }
    cout<<res;
}
