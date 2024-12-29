#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll a[15],f[15];
void sinh(string s,ll j, ll n)
{
    if(j==n)
    {
        cout<<s<<endl;
    }
    For(i,j,s.size()-1)
    {
        swap(s[j],s[i]);
        sinh(s,j+1,n);
        swap(s[j],s[i]);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    sinh("ABAB",0,3);
}
