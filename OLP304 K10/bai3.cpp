#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long a[n], sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, greater<long long>());
    for (int i = 0; i < n; i++) {
        sum+=pow(2, i)*a[i];
    }
    cout << sum;
}
