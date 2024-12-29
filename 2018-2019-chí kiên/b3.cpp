#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>dem;
ll tinh0[1000005];
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll k,re=0; string s;
    cin>>k>>s; dem.push_back(0);
    For(i,0,s.size()-1)
    {
        if(s[i]=='1')
        {
            dem.push_back(i+1);
        }
    }
    dem.push_back(s.size()+1);
    if(k==0)
    {
        tinh0[1]=1;
        For(i,2,s.size())
        {
            tinh0[i]=tinh0[i-1]+i;
        }
        For(i,1,dem.size()-1)
        {
            re+=tinh0[dem[i]-dem[i-1]-1];
        }
        cout<<re;
        return 0;
    }
    For(i,1,dem.size()-1)
    {
        if(i+k>dem.size()-1) break;
        re+=(dem[i]-dem[i-1])*(dem[i+k]-dem[i+k-1]);
    }
    cout<<re;
}

