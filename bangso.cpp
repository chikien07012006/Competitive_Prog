#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll a[5][5],d=0;
map<ll,ll>dem;
int main()
{
    ios_base::sync_with_stdio(0);
    For(i,1,3)
    {
        For(j,1,3)
        {
            cin>>a[i][j];
            dem[a[i][j]]++;
            if(dem[a[i][j]]==1)d++;
        }
    }
    if(d==1)
    {
        cout<<"NO"; return 0;
    }
    ll t=a[1][1]+a[1][2]+a[1][3];
    if(a[2][1]+a[2][2]+a[2][3]==t&&a[3][1]+a[3][2]+a[3][3]==t&&a[1][1]+a[2][1]+a[3][1]==t&&a[1][2]+a[2][2]+a[3][2]==t&&a[1][3]+a[2][3]+a[3][3]==t)
    {
        cout<<"YES";
    }
    else cout<<"NO";
}
