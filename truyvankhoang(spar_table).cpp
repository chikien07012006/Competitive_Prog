#include <bits/stdc++.h>
#define log2(n) 31 - __builtin_clz(n)
using namespace std;

const int N = 1e5 + 5;

template <typename T, class F = function<T(const T&, const T&)>>
class SparseTable { // 0 - index
public:
    int n;
    vector<vector<T>> v;
    F func;

    SparseTable(const vector<T>& a, const F& f) : func(f), n(a.size()) {
        int k = log2(n);
        v.resize(k + 1); v[0] = a;
        for (int j = 1; j <= k; j++) {
            v[j].resize(n - (1 << j) + 1);
            for (int i = 0; i <= n - (1 << j); i++) {
                v[j][i] = func(v[j - 1][i], v[j - 1][i + (1 << j - 1)]);
            }
        }
    }

    T get(const int &l, const int &r) {
        assert(0 <= l && l <= r && r < n);
        int k = log2(r - l + 1);
        return func(v[k][l], v[k][r - (1 << k) + 1]);
    }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    SparseTable<int> spt(a, [&] (int x, int y) {
        return x | y;
    });
    int q; cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        --l; --r;
        cout << spt.get(l, r) << "\n";
    }
}
