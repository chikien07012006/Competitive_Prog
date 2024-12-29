#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD=1000000007;
int main()
{
    int res = 0;
    int sum = 0;
    int n;cin>>n;
    while(n--)
    {
        int x;
        cin >> x;
        res = (res + (1LL * x * sum) % MOD) % MOD;
        sum = (sum + x) % MOD;
    }
    cout << res;
    return 0;
}
