#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)turn 1;
}
int phi(int n) {
    int res = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            res -= res / i;
        }
    }
    if (n != 1) {
        res -= res / n;
    }
    return res;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>
}




