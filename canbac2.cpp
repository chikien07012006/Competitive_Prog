#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define vao cin>>
#define ra cout<<
bool ktsnt(ll n)
{
    if(n<2)return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll T; vao T;
    while(T--)
    {
        ll n,fl=0; vao n;
        if(ktsnt(n)==1){ vao 1<<' '<<n<<endl; continue;}
        For(i,1,sqrt(n))
        {
            if(n%i==0)
            {
                ll h=n/i;
                ll t=sqrt(h);
                if(t*t==h){fl=1;ra t<<' '<<i<<endl;break;
    }
            }
        }
        if(fl==0)
        {
              for(ll i=sqrt(n);i>=1;i--)
              {
                  if(n%i==0)
                  {
                      ll h=sqrt(i);
                      if(h*h==i){ra h<<' '<<n/i<<endl;break;}
                  }
              }
        }
    }
}

