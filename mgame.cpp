#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll a[15],b[15],s[15];
int main()
{
 //   freopen("mgame.inp","r",stdin);
   // freopen("mgame.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n,k; cin>>k>>n;
        For(i,1,9)
        {
            ll h;
            if(k==1)h=pow(i,2);
            else h=pow(i,4);
                a[i]=h%10;
                s[i]=s[i-1]+a[i];
        }
    cout<<((n/10)*s[9]+s[n%10])%10;
}



