#include<bits/stdc++.h>
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll T; cin>>T;
    while(T--)
    {
    ll n; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i];
    stack<ll>s; vector<ll>b;
    s.push(100);
    for(ll i=n;i>=1;i--)
    {
        while(s.top()<=a[i])s.pop();
        if(s.top()==100) b.push_back(-1);
            else b.push_back(s.top());
        s.push(a[i]);
    }
    for(ll i=b.size()-1;i>=0;i--) cout<<b[i]<<' ';
    cout<<endl;
    }
}

