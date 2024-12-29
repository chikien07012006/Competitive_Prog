#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
map<ll,ll>dem;
ll k; string n;
char htai[100];
void dequy(ll pos,ll trcdo)
{
    For(j,trcdo,n.size()-1)
    {
        htai[pos]=n[j];
        if(pos==k)
        {
            For(tam,1,k) cout<<htai[tam];
            cout<<endl;
        }
        else
        {
            dequy(pos+1,j+1);
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    cin>>k;
    dequy(1,0);
}
