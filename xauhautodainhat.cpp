#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n; string a[n+5]; string res;
    For(i,1,n) cin>>a[i],reverse(a[i].begin(),a[i].end());
    sort(a+1,a+1+n);
    For(i,1,n-1)
    {
            string t;
            ll k=0,h=0;
            while(a[i][h]==a[i+1][k]&&k<=a[i+1].size()-1&&h<=a[i].size()-1)
            {
                t=t+a[i][h];
                k++;h++;
            }
            reverse(t.begin(),t.end());
            if(res.size()<t.size())
            {
                res=t;continue;
            }
            if(res.size()==t.size())
            {
                res=min(res,t);
            }
    }
    cout<<res;
}
