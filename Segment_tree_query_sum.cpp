#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;

long long n, m, a[N];
long long smt[N];

void build(int id, int l, int r) {
    if (l == r) {
        smt[id] = a[l];
        return;
    }
    int mid = (l + r) / 2;
    build(id * 2, l, mid);
    build(id * 2 + 1, mid + 1, r);
    smt[id] = smt[id * 2] + smt[id * 2 + 1];
}

void update(int id, int l, int r, int i, int v) {
    if (r < i || l > i)
        return;
    if (l == r) {
        smt[id] = v;
        return;
    }
    int mid = (l + r) / 2;
    update(id * 2, l, mid, i, v);
    update(id * 2 + 1, mid + 1, r, i, v);
    smt[id] = smt[id * 2] + smt[id * 2 + 1];
}

long long get(int id, int l, int r, int u, int v) {
    if (r < u || l > v)
        return 0;
    if (u <= l && r <= v) {
        return smt[id];
    }
    int mid = (l + r) / 2;
    return get(id * 2, l, mid, u, v) + get(id * 2 + 1, mid + 1, r, u, v);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    build(1, 1, n);

    while (m--) {
        int kind;
        cin >> kind;
        if (kind == 1) {
            int i, v;
            cin >> i >> v;
            i += 1;
            update(1, 1, n, i, v);
        }
        else {
            int u, v;
            cin >> u >> v;
            u++;
            cout << get(1, 1, n, u, v) << "\n";
        }
    }
}
