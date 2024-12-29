#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,ch=0;
ll check(ll n){
   if(n<=1) return 0;
   if(n<=3) return 1;
   if(n%2==0||n%3==0) return 0;
   for(ll i=5;i*i<=n;i+=6)
     if(n%i==0||n%(i+2)==0)
       return 0;
    return 1;
}
void sub1(ll x)
{
	while(x>0)
	{
		if(check(x)!=1)
		{
			cout<<"KHONG";
			exit(0);
		}
		x/=10;
	}
	cout<<"PHAI";
	exit(0);
}
void sub2(ll x)
{
	while(x>0)
	{
		if(x%10==2 && x>10)
		{
			cout<<"KHONG";
			exit(0);
		}
		if(x%10==0 || x%10==4 || x%10==6 || x%10==8)
		{
			cout<<"KHONG";
			exit(0);
		}
		if(check(x)) x/=10;
		else
		{
			cout<<"KHONG";
			exit(0);
		}
	}
	cout<<"PHAI";
	exit(0);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cin.tie(NULL);
	cin>>n;
	if(n<=1e5) sub1(n);
	else sub2(n);
}
