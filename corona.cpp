#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[200];
int main()
{
    ios_base::sync_with_stdio(0);
    string n; cin>>n;

    For(i,0,n.size()-1)
    {
        d[n[i]]++;
    }
    d['O']=d['O']/2;
    cout<<min(d['O'],min(d['C'],min(d['R'],min(d['N'],d['A']))));
}


