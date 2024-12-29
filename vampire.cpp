#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        ll n,q,flag=0;cin>>n;q=n;if(n==0){cout<<"-1 0 1"<<endl;}
        else
        {n=abs(n);
        for(ll i=1;i<=sqrt(n);i++)
        {
            if(n%i==0&&n/i!=i)
            {
                for(ll j=0;j<=i/2;j++)
                {
                    for(ll k=0;k<=j;k++)
                    {
                        ll h=i-j-k;
                        if((pow(h,3)+pow(j,3)+pow(k,3)-3*j*k*h)==n){if(q>0)cout<<j<<' '<<k<<' '<<h<<endl;if(q<0)cout<<0-j<<' '<<0-k<<' '<<0-h<<endl;flag=1;break;}
                    }
                    if(flag==1){break;}
                }
                if(flag==1)break;
                for(ll j=0;j<=(n/i)/2;j++)
                {
                    for(ll k=0;k<=j;k++)
                    {
                        ll h=n/i-j-k;
                        if((pow(h,3)+pow(j,3)+pow(k,3)-3*j*k*h)==n){if(q>0)cout<<j<<' '<<k<<' '<<h<<endl;if(q<0)cout<<0-j<<' '<<0-k<<' '<<0-h<<endl;flag=1;break;}
                    }
                    if(flag==1){break;}
                }
                if(flag==1){break;}
            }
            if(n%i==0&&n/i==i)
            {
                for(ll j=0;j<=i/2;j++)
                {
                    for(ll k=0;k<=j;k++)
                    {
                        ll h=i-j-k;
                        if((pow(h,3)+pow(j,3)+pow(k,3)-3*j*k*h)==n){if(q>0)cout<<j<<' '<<k<<' '<<h<<endl;if(q<0)cout<<0-j<<' '<<0-k<<' '<<0-h<<endl;flag=1;break;}
                    }
                    if(flag==1){break;}
                }
                if(flag==1)break;
            }
        }
        if(flag==0){cout<<"LN"<<endl;}}
    }
}
