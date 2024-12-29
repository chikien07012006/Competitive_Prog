#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll a[500005];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,m,k=1; cin>>n>>m;
    string s;
    For(i,1,n)
    {
        cin>>s; if(s.size()<10){a[k]=s.size();k++;}
        else {a[k]=0;k++;}
    }
    For(i,1,m)
    {
        cin>>s; if(s.size()<10){a[k]=s.size();k++;}
        else {a[k]=0;k++;}
    } k--;
    while(k>2)
    {
    For(i,1,k-1)
    {
       a[i]=a[i]+a[i+1];
       if(a[i]>=10)a[i]=a[i]%10;
    }
    k--;
    }
    cout<<a[1]<<a[2];
}





