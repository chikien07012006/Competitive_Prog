#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[40],d=0,re=0,n;
void sinhnhiphan(int i,int n)
{
	for(int j=0;j<=1;j++)
    {
        if(j==1&&d==0)continue;
        if(j==0)d++;
        else d--;
        a[i]=j;
        if(i==n)
        {
            if(d==0)re++;
        }
        else
        {
		sinhnhiphan(i+1,n);
	    }
	    if(j==0)d--;
	    else d++;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    sinhnhiphan(1,n);cout<<re;
}

