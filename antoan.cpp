#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll hoa=0,thuong=0,so=0;
bool check()
{
    if(hoa>0&&thuong>0&&so>0) return 1;
    return 0;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,u=1,v=1,re=0,check1=0; cin>>n;
    string s; cin>>s;
    while(v<=n)
    {
        if(s[v-1]>='A'&&s[v-1]<='Z') hoa++;
        if(s[v-1]>='a'&&s[v-1]<='z') thuong++;
        if(s[v-1]>='0'&&s[v-1]<='9') so++;
        if(check()==1&&v-u+1>=6)
        {
            if(check1==0)
            {
                re=re+(n-v+1)*(u-1+1);
                check1=1;
            }
            else
            {
                re=re+(n-v+1);
            }
            if(s[u-1]>='A'&&s[u-1]<='Z') hoa--;
            if(s[u-1]>='a'&&s[u-1]<='z') thuong--;
            if(s[u-1]>='0'&&s[u-1]<='9') so--;
            u++;
        }
        else
        {
            v++;
        }
    }
    cout<<re;
}
