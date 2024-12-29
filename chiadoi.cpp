#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1;

int n, m;
vector<int> adj[N];
int color[N], d[N];
bool vis[N];

void dfs(int u) {
    vis[u] = true;
    for (int v: adj[u]) {
        if (!vis[v]) {
            d[v] = d[u] + 1;
            color[v] = color[u] ^ 1;
            dfs(v);
        }
        else {
            if (d[v] % 2 == d[u] % 2) {
                cout << -1;
                exit(0);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i])
            dfs(i);
    }

    for (int i = 1; i <= n; i++) {
        cout << color[i] + 1 << " ";
    }


}
