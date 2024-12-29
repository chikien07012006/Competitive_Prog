#include<bits/stdc++.h>
using namespace std;
#define ll long long;
#define For(i,a,b) for(long long i=a;i<=b;i++)
signed main()
{
    ios_base::sync_with_stdio(0);
    long long re=0;
    long long a,b; cin>>a>>b;
    For(i,sqrt(a),sqrt(b))
    {
        if(i*i>=a&&i*i<=b) {cout<<i*i<<' ';}
    }
}