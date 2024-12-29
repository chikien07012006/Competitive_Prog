#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 3e3 + 1;
const int oo = 1e18;
const int MOD = 1e9 + 7;

class FenwickTree1n {
public:
    int n;
    vector<int> v;

    FenwickTree1n(int n) : n(n) {
        v.resize(n + 1);
    }

    void update(int p, int val) {
        for (int i = p; i <= n; i += i & -i)
            v[i] += val;
    }

    int query(int p) {
        int ans = 0;
        for (int i = p; i; i -= i & -i)
            ans += v[i];
        return ans;
    }

    int query(int l, int r) {
        return query(r) - query(l - 1);
    }
};


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin >> n >> q;
    FenwickTree1n fw(n);
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        fw.update(i, x);
    }
    while (q--) {
        int k;
        cin >> k;
        if (k == 1) {
            int idx, val;
            cin >> idx >> val;
            fw.update(idx, val);
        } else {
            int l, r;
            cin >> l >> r;
            cout << fw.query(l, r) << "\n";
        }
    }

}
