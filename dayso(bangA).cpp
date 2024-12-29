#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll a[5];
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,m; cin>>n>>m;
    ll t0,t1,t2;
    if(n%3==0)
    {
        t0=(n-3)/3+1;
        t1=t0;
        t2=t1;
    }
    if(n%3==1)
    {
        t0=((n-1)-3)/3+1;
        t1=(n-1)/3+1;
        t2=((n-2)-2)/3+1;
    }
    if(n%3==2)
    {
        t2=(n-2)/3+1;
        t0=((n-2)-2)/3+1;
        t1=((n-1)-1)/3+1;
    }
    a[1]=t1;a[2]=t2;a[3]=t0;
    ll t3=0,i=1;
    while(1)
    {
        ll t4=t3;
        t3=t3+a[i];
        if(m<=t3)
        {

            m=m-t4;
            cout<<(m-1)*3+i;
            return 0;
            //ssh=(sc-sd)/3+1;
        }
        i++;
    }
}



