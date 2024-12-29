#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll a,b,c,d,re=0;cin>>a>>b>>c>>d;
    ll h=d/(min(a,min(b,min(c,d))));
    for(ll i=0;i<=h;i++)
    {
        if(i*a>d)break;
        for(ll j=0;j<=h;j++)
        {
            if(j*b>d)break;
            if(i*a+b*j>d)break;
            for(ll k=0;k<=h;k++)
            {
                if(k*c>d)break;
                if(i*a+j*b+k*c>d)break;
                if(i*a+j*b+k*c==d){re=max(re,i+j+k);break;}
            }
        }
    }
    if(re!=0)
    cout<<re;
    else cout<<-1;
}
