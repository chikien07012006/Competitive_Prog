    #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0; cin>>n; double x[n+5],y[n+5];
    For(i,1,n)
    {
        cin>>x[i]>>y[i];
    }
    For(i,1,n)
    {
        For(j,i+1,n)
        {
            For(k,1,n)
            {
                For(l,1,n)
                {
                    if(i!=j&&j!=k&&k!=l)
                    {
                    double a=double(y[i]-y[j])/double(x[i]-x[j]);
                    //double a=double(y[i]-b)/double(x[i]);
                    double a1=double(y[k]-y[l])/double(x[k]-x[l]);
                    //double a1=double(y[k]-b1)/double(x[k]);
                    if(a*a1==-1)
                    {re++; cout<<i<<' '<<j<<endl<<k<<' '<<l<<endl<<endl;}
                    }
                }
            }
        }
    }
    cout<<re;
}








