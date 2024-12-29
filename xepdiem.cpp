#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,k=1,re=0; cin>>n; ll a[n+5],b[n+5];
    For(i,1,n)
    {
        cin>>a[i];
    }
    For(i,1,n)
        For(j,i+1,n)
        For(k,j+1,n)
        For(l,k+1,n)
    {
        if((a[i]==a[j]&&a[k]==a[l])||(a[i]==a[k]&&a[j]==a[l])||(a[i]==a[l]&&a[j]==a[k]))re++;
    }
    cout<<re;
}






