#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
int main () {
	ios_base::sync_with_stdio(0) ;
	ll n,k,i;
	cin>>n>>k; ll a[n];
	for(i=1;i<=n;i++)cin>>a[i] ;
	sort(a+1,a+1+n) ;
	for(i=k/2;i>0;i--)if(a[i]==a[k/2+1]) cout<<a[i]<<" ";
	for(i=k/2+1;i<=n-k/2;i++) cout<<a[i]<<" ";
	for(i=n-k/2+1;i<=n;i++)if(a[i]==a[n-k/2])cout<<a[i]<<" ";
}

