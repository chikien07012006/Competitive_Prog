#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[10000005];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0; cin>>n;
    string a; cin>>a;
    For(i,0,a.size())
    {
        ll d=1;
        if(a[i]==a[i+1])
        {
        For(j,i+1,a.size()-1)
        {
            if(a[j]==a[j-1])d++;
            if(a[j]==a[j-1]||j==a.size()-1)
            {
               // cout<<d<<' '<<endl;
                re=re+d/2;
                break;
            }
        }
        i=i+d-1;
        }
    }
    cout<<re;
}

