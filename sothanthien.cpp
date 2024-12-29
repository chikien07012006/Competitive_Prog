#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll tong(ll n)
{
    ll re=0;
    For(i,1,sqrt(n))
    {
        if(n%i==0)
        {
            if(n/i!=i)re=re+i+n/i;
            else re=re+i;
        }
    }
    return re;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll a,b; cin>>a>>b;
    double n=double(tong(a))/double(a);
    double n1=double(tong(b))/double(b);
    if(n==n1)
    {
        cout<<tong(a)/__gcd(tong(a),a)<<endl<<a/__gcd(tong(a),a);
    }
    else cout<<-1;
}

