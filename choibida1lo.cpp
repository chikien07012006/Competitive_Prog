#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll n;
stack<ll>s;
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i];
    ll i=1;
    For(k,1,n)
    {
        s.push(k);
        while(s.empty()&&s.top()==a[i])
        {
            s.pop();i++;
        }
    }
    if(i>n) cout<<"NO";
    else cout<<"YES";
}
