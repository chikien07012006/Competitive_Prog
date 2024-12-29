#include<iostream>
using namespace std;
typedef long long ll;
ll a[100000000];
int main()
{
    ios_base::sync_with_stdio(0);
    ll k,m,i;
    cin>>k>>m;if(m==1){cout<<0;return 0;}
    a[1]=1;a[2]=2;
    for( i=3;i<=k;i++)
    {
        a[i]=(a[i-1]+a[i-2])%m;
        if(a[i]==1&&a[i-1]==1)
        {
            i--;break;
        }
    }
    cout<<a[k%i];
}
