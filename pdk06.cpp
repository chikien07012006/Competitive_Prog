#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 1;
const int INF = 1e9 + 1;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
int n, m, d[N][N], d2[N][N];
char a[N][N];
bool vis[N][N], vis2[N][N];
bool inGrid(int x, int y) {
    if (x >= 1 && x <= n && y >= 1 && y <= m) return true;
    return false;
}
bool isExit(int x, int y) {
    if (x == 1 || x == n || y == 1 || y == m) return true;
    return false;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    queue<pair<int, int>> q;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == 'M') {
                q.push({i, j});
                vis[i][j] = true;
            }
        }
    }
    while (!q.empty()) {
        int u = q.front().first;
        int v = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int r = u + dx[i];
            int c = v + dy[i];
            if (!inGrid(r, c) || vis[r][c] || a[r][c] == '#') continue;
            q.push({r, c});
            d[r][c] = d[u][v] + 1;
            vis[r][c] = true;
        }
    }
for (int i = 1; i <= n; i++)
    {for (int j = 1; j <= m; j++)
    {if (a[i][j] == 'A') {q.push({i, j});vis2[i][j] = true;}}}
while (!q.empty()) {int u = q.front().first;int v = q.front().second;q.pop();
for (int i = 0; i < 4; i++)
    {int r = u + dx[i];int c = v + dy[i];
    if (!inGrid(r, c) || vis2[r][c] || a[r][c] == '#') continue;
    q.push({r, c});d2[r][c] = d2[u][v] + 1;vis2[r][c] = true;}}
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        if (vis2[i][j])if (d2[i][j] < d[i][j] || vis[i][j] == 0)
        if (isExit(i, j))return cout << "YES", 0;cout << "NO";}

