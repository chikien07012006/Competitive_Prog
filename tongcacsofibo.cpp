#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<long long> m;
void abc()
{
    ll n1=1,n2=1;m.push_back(1);m.push_back(1);
    while(n1+n2<=2000000000)
    {
        m.push_back(n1+n2);
        ll t=n1+n2;
        n1=n2;n2=t;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    abc();//cout<<m.size();
    ll n; cin>>n;
    cout<<n<<'=';
    while(n>0)
    {
        ll l=0,r=45,mid,t=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(m[mid]>n)r=mid-1;
            if(m[mid]<=n) {t=max(t,m[mid]);l=mid+1;}
        }
        if(t!=n)
        cout<<t<<'+';
        else cout<<t;
        n=n-t;
    }
}
