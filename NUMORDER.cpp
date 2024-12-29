#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
long long a[100000000];
int main()
{
    ios_base::sync_with_stdio(0);
    ll m,n,k,d=1;
    cin>>m>>n;
    if(m<=n);
    for(ll i=1;i<=m;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            cout<<i*i+j*j<<' ';
        }
        cout<<endl;
    }
}
