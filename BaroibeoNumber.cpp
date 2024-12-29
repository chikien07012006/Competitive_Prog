#include<bits/stdc++.h>
#define ll long long
using namespace std;
 long long v[10000005], m = 0;
long long t[25];
 void ketqua(long long n)
{
    long long ghepso = 0;
    for (int i=1; i<=n; i++) ghepso = ghepso * 10 + t[i];
    v[++m] = ghepso;
}
void sinhso(int i, int n, int k)
{
    t[i] = 0;
    if (i == n) ketqua(n);
    else sinhso(i + 1, n, k);
    for (int j=1; j<=9; j++)
    {
        if (k == 3) continue;
        t[i] = j;
        if (i == n) ketqua(n);
        else sinhso(i + 1, n, k + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    sinhso(1, 18, 0);
    v[++m] = 1e18;
    sort(v+1, v+1+m);
    long long T, L, R,res=0;
    cin >> T;
    while (T--)
    {
        cin >> L >> R;
        ll l=1,r=m,mid,re=1e18,re1=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(v[mid]>=L){re=min(re,mid);r=mid-1;}
            if(v[mid]<L)l=mid+1;
        }
        l=1;r=m;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(v[mid]<=R){re1=max(re1,mid);l=mid+1;}
            if(v[mid]>R)r=mid-1;
        }
        if(re!=1e18&&re1!=0)cout<<re1-re+1<<"\n";
       // else cout<<0<<"\n";
    }
}
