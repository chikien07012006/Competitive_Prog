#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define fast ios_base :: sync_with_stdio(0) , cin.tie(NULL) , cout.tie(NULL) ;
const ll N = 2e6 + 5;
const ll MOD = 1e9 + 7;
const ll MODD = 1e9 + 6;
ll n , res = 1 , check[N] , cnt[N] , p = 1, flag = 0 , vt = 0;
ll sqr(ll  x)
{
    return (x % MOD * x % MOD) % MOD;
}
ll  POW(ll a, ll b )
{
    if (b == 0) return 1;
    else
        if( b & 1) return a * (sqr(POW(a , b >> 1)) % MOD) % MOD;
        else return sqr(POW(a , b >> 1)) % MOD;
}
signed main()
{
    fast
    cin >> n;
    for( ll i = 1 ; i <= n ;i++)
    {
        ll x;
        cin >> x;
        if(!check[x]) cnt[++vt] = x;
        check[x]++;
    }
    for( ll i = 1 ; i <= vt ;i++)
    {
        ll temp = check [cnt[i]] + 1;
        if(!(temp & 1) && !(flag))
        {
            flag = 1 ;
            p = (( p % MODD) * (temp >> 1) % MODD ) % MODD;
        }
        else p = (( p % MODD) * (temp % MODD)) % MODD;
    }
    for( ll i = 1 ; i <= vt; i++)
    {
        ll temp ;
        ll temp1 = check[cnt[i]];
        if( flag == 0) temp = ((temp1 >> 1) % MODD * ( p % MODD)) % MODD;
        else temp = ((temp1 % MODD) * ( p % MODD)) % MODD;
        res = ((res % MOD) * POW(cnt[i] , temp)) % MOD;
    }
    cout << res  ;
}
