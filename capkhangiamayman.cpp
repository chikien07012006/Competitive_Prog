#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define vao cin>>
#define ra cout<<
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll n,p,t=0,t1=0,re=0; vao n>>p; ll a[n+5];
    For(i,1,n) vao a[i];
    For(i,1,n)
    {
        if(n-i<=re)break;
        for(ll j=n;j>=i+1;j--)
        {
            if(a[j]-a[i]>=p)
            {
                if(j-i>re)
                {
                    re=j-i;
                    t=i;t1=j;
                    break;
                }
            }
        }
    }
    if(t==0&&t1==0) cout<<0;
    else
    cout<<t<<' '<<t1;
}



