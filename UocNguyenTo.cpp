#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll re=0;
set<ll>a;
bool ktsnt(ll n)
{
    if(n<2)return 0;
    if(n==2||n==3)return 1;
    if(n%2==0||n%3==0)return 0;
    for(ll i=5;i<=sqrt(n);i=i+6)
    {
        if(n%i==0||n%(i+2)==0)return 0;
    }
    return 1;
}
void dem(ll i , ll n)
{
    ll d=0,j=i;
    while(i<n)
    {
        if(n%i==0){d++;a.insert(i);}
        i=i*j;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n;
    For(i,2,sqrt(n))
    {
        if(n%i==0)
        {
            if(ktsnt(i)==1)
            {
                dem(i,n);
            }
        }
    }
    cout<<a.size()<<endl;
    set<long long>::iterator itr;
    for (itr = a.begin(); itr != a.end(); itr++) {
        cout << *itr << " ";
    }
}
