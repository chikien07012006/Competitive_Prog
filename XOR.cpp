#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 3e5 + 5;

int countBit(int x) {
  return __builtin_popcountll(x);
}

signed main () {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int S, X;
  cin >> S >> X; if
  if ((S - X) % 2 == 1 || S < X)
    return cout << 0, 0;
  int A = (S - X) / 2;
  if (A & X)
    cout << 0;
  else {
    int ans = 1ll << countBit(X);
    if (S == X)
      ans -= 2;
    cout << ans;
  }
}
