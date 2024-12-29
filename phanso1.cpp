#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
double a[25];
ll b[25],u,v;
void sinh(ll i,ll n)
{
    For(j,1,3)
    {
        b[i]=j;
        if(i==n)
        {
             double tong=a[1];
            For(k,1,n)
            {
                if(b[k]==1)
                {
                    tong=tong+a[k+1];
                }if(b[k]==2)
                {
                    tong=tong-a[k+1];
                }if(b[k]==3)
                {
                    tong=tong*a[k+1];
                }
            }
            double z=float(u)/float(v);
            cout<<tong<<' '<<z<<endl;
            if(tong==z)
            {
                For(k,1,n)
                {
                 if(b[k]==1)
                {
                    cout<<'+'<<' ';
                }if(b[k]==2)
                {
                    cout<<'-'<<' ';
                }if(b[k]==3)
                {
                    cout<<'x'<<' ';
                }
                }
                exit(0);
            }
        }
        else
        {
            sinh(i+1,n);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n; char t;
    cin>>n;
    For(i,1,n)
    {
        cin>>u>>t>>v;
        a[u]=float(u)/float(v);
    }
    cin>>u>>t>>v;
    sinh(1,n-1);
}

