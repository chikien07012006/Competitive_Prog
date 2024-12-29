#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll a;
void chia(ll y, ll cnt)
{

}
int main()
{
    ios_base::sync_with_stdio(0);
    ll b,c,d; cin>>a>>b>>c>>d;
    For(i,0,64)
    {
        For(j,0,64)
        {
            For(k,0,64)
            {
                if(chia(b,i)==0)continue;
                if(chia(c,j)==0)continue;
                if(chia(d,k)==0)continue;
            }
        }
    }
}
