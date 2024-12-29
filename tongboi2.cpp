#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    ll l,r,k; cin>>l>>r>>k;
    while(l%k!=0)l++;
    while(r%k!=0)r--;
    ll ssh=((r-l)/k)+1;
    cout<<(r+l)*ssh/2;
}

