#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll n,k,re=0;
bool check(ll n)
{
    ll h=sqrt(n);
    if(h*h==n) return 1;
    return 0;
}
void th1()
{
    For(i,2,n)
    {
        if(check(i)==1)re++;
    }
    cout<<re;
}
void th2()
{
    if(k==2)
    {
        For(i,2,n)
        {
            For(j,i+1,n)
            {
               if(check(i*j)==1)re++;
            }
        }
        cout<<re;
    }
    if(k==3)
    {
        For(i,2,n)
        {
            For(j,i+1,n)
            {
                For(k,j+1,n)
                {
                    if(check(i*j*k)==1)re++;
                }
            }
        }
        cout<<re;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>k;
    if(k==1)
    {
        th1();
        return 0;
    }
    if((n<=5*10e3&&k==2)||(n<=5*10e2&&k==3))
    {
        th2();
        return 0;
    }
}






