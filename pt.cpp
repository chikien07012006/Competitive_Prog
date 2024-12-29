#include<bits/stdc++.h>
using namespace std;
int main()
{
int w=1,N;
int soAo=1;
int flag = 0;
int tong=0;
cin>> N;
while(1)
{
	w++;
	for(int i=1;i<=w;i++)
	{
		tong = tong+i;
	}
	if(tong>N)
		break;
	tong = 0;

	while(tong<N)
	{
		for(int r=soAo; r<soAo + w;r++);
		{
			tong=tong+r;
		}
		soAo++;
	}
	if(tong == N)
	{
		flag = 1;
		K = w;
	}
	else
	{
		;
	}
}
if(flag == 1)
{
	cin>>k;
}
else
{
	cin>>0;
}
}
