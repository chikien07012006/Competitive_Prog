#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll add(ll x, ll y) {return (x + y) % MOD;}
ll mul(ll x, ll y) {return ((x%MOD) * (y%MOD)) % MOD;}
ll bpow(ll x, ll y) {ll res = 1; while (y) {if (y & 1) res = mul(res, x); x = mul(x, x); y >>= 1;} return res;}
ll ModInverse(ll x) {return bpow(x, MOD - 2);}
ll Div(ll x, ll y) {return mul(x, ModInverse(y));}
const int N = int(1e6) + 1;
int f[10220];
ll gt(ll x){
    ll ans = 1;
    for(int i=1;i<=x;i++) ans = ((ans%MOD) * (i%MOD) ) %MOD ;

    return ans;
}
signed main(){
	ios_base::sync_with_stdio(0);
	cout.tie(0) , cin.tie(0);
	string s; getline(cin,s);
    for(auto i:s) f[i]++;
    bool ok = 0;
    ll res = gt(s.size()/2);
    int dem = 0 ;
    for(int i='A';i<='Z';i++)
    {
        if(f[i]>1){
            if(f[i]%2==1) dem++;
            if(dem>=2)return cout << 0 , 0;
            ok = true;
            res = Div(res , gt(f[i]/2));
        }  else if(f[i]==1) dem++;
    }
    if(ok && dem<2) cout << res; else cout << 0;
}


