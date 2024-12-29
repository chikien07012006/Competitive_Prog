#include<bits/stdc++.h>
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
	/*ll n,re=0; cin>>n; ll a[n+5];
	For(i,1,n) cin>>a[i];
	For(i,1,n-2)
	{
	    For(j,i+1,n-1)
	    {
	        For(k,j+1,n)
	        {
	            re=max(re,((a[i]-a[j])*(a[j]-a[k])));
	        }
	    }
	}
	cout<<re;*/
	ll n,t=0,t1=1e18,re=0; cin>>n; ll a[n+5];
	For(i,1,n) cin>>a[i];
	t1=a[1];re=a[1];
	For(i,1,n-1)
	{
	    if(i%2==1)
        {
            re=re-a[i+1];
            t=max(t,a[i+1]);
        }
        else
        {
            re=re+a[i+1];
            t1=min(t1,a[i+1]);
        }
	}
	if(t<t1) cout<<re;
	else
	cout<<re+2*(t1-t);
}


