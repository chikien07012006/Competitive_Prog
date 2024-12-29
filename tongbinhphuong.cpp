#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n;
    cin >> n;
    while(n --){
    ll t;
    cin >> t;
    ll x = t;
    bool a = false;
    if(t % 2 == 0)
        t /= 2;
    else a = true, t /= 2;
    if(a == true) cout << t * (2 * t + 1) - x * x << endl;
    else cout << t * (2 * t + 1) << endl;
    }
}
