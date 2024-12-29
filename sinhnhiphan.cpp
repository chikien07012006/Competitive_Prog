#include<bits/stdc++.h>
using namespace std;
long long a[25],b[25],fl=0,re=0,h,d=0;
void sinhnhiphan(int i,int n)
{
	for(int j=0;j<=1;j++)
{
	a[i]=j;
	if(i==n)
	{long long t=0;
		for(int k=1;k<=n;k++){if(a[k]==1)t=t+b[k];}
		if(t==h)re++;
	}
else 	{
		sinhnhiphan(i+1,n);
	}
}
}
int main()
{
    long long t,k;
    cin>>t>>h;
    for(long long i=1;i<=t;i++){cin>>b[i];}
    sinhnhiphan(1,t);
    cout<<re;
    return 0;
}
