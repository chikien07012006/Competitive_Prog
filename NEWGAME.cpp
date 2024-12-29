#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,i,res=0,j;
    cin>>n;ll a[n],b[n]; for(ll i=1;i<=n;i++) cin>>a[i];j=n;
    for(i=1;i<=n;i++){cin>>b[i];a[i]=a[i]-b[i];}
    sort(a+1,a+1+n,greater<int>());

    for(i=1;i<=n;i++)
    {
        for(j=j;j>i;j--)
        {
            if(a[i]+a[j]>0){break;}
        }
        if(j<=i)break;
        res=res+(j-i);
    }
    cout<<res;
}
