#include<iostream>
#include<math.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k;cin>>n;
    for(ll i=1;i<=n;i++)
    {
        cin>>k;
        ll h=sqrt(k);
        cout<<h*2+1<<endl;
    }
}
