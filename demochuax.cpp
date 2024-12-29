#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll T; cin>>T;
    while(T--)
    {
        ll n,x,re=0; cin>>n>>x;
        if(x>n*n)cout<<0<<endl;
        else
        {
            For(i,1,sqrt(x))
            {
                if(x%i==0)
                {
                    ll y=x/i;
                    if(i<=n&&y<=n)
                    {
                        if(i==y)re=re+1;
                        else re=re+2;
                    }
                }
            }
            cout<<re<<endl;
        }
    }
}
