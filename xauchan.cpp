#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[255];
int main()
{
    ios_base::sync_with_stdio(0);
    string n; cin>>n;
    For(i,0,n.size()-1)d[n[i]]++;
    For(i,0,n.size()-1)
    {
        if(d[n[i]]%2==1){cout<<"No";return 0;}
    }
    cout<<"Yes";
}
