#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define vo cin>>
#define ra cout<<
vector<ll>a;
int main()
{
 //   freopen("BINHPHUONG.inp","r",stdin);
 //   freopen("BINHPHUONG.out","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll n; vo n;
    For(i,1,n)
    {
        For(j,1,n)
        {
            if(i!=j)
            {
                a.push_back(i*i+j*j);
                a.push_back(i*i+j*j);
                cout<<a[a.size()-2]<<' '<<a[a.size()-1]<<' ';
            }
            else
            {
                a.push_back(i*i+j*j);
                cout<<a[a.size()-1]<<' ';
            }
            if(a.size()==n)
            {
                cout<<a[a.size()-1];return 0;
            }
        }
    }
}




