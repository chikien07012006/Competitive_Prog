#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long a[25],fl=0;ll b[25];
void sinhnhiphan(int i,int n)
{
	for(int j=1;j<=2;j++)
{
	a[i]=j;
	if(i==n)
	{ll f=0,f1=0;
		for(int k=1;k<=n;k++){if(a[k]==1)f=f+b[k];else f1=f1+b[k];}
		if(f==f1){for(int k=1;k<=n;k++) cout<<a[k];cout<<endl;fl=1;}
	}
else 	{
		sinhnhiphan(i+1,n);
	}
}
}
int main()
{
    long long t;
    cin>>t;
    for(ll i=1;i<=t;i++)cin>>b[i];
    sinhnhiphan(1,t);
    if(fl==0)cout<<-1;
    return 0;
}
