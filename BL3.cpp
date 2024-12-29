#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define ll long long
ll a[300][300];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0; cin>>n;
    For(i,1,n) For(j,1,n) cin>>a[i][j];
    For(i,1,n)
    {
        For(j,1,n)
        {
            if(a[i][j]==1&&a[i-1][j-1]==0&&a[i][j-1]==0&&a[i-1][j]==0)re++;
        }
    }
    cout<<re;
}//

