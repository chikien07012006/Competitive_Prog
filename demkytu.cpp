#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll a[123],d=0;
int main()
{
    ios_base::sync_with_stdio(0);
    string n; cin>>n;
    For(i,0,n.size()-1)
    {
        a[n[i]]++;
    }
    For(i,0,122)
    {
        if(a[i]==1)d++;
    }
    cout<<d;
}
