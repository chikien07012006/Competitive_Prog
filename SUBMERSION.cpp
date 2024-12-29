#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,k,a[100001];
void xl()
{
    cin>>n>>k;ll res=0;
    for(long long i=1;i<=n;i++){cin>>a[i];if(a[i]>k&&a[i]%k==0)res++;}
    cout<<res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    xl();
}
