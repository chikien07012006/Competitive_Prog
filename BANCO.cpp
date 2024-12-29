#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll a[10][10],re=0;
int main()
{
   freopen("BANCO.inp","r",stdin);
   freopen("BANCO.out","w",stdout);
    ios_base::sync_with_stdio(0);
    For(i,1,8)
    {
            string n; cin>>n;
            For(j,0,7) a[i][j+1]=long(n[j]-48);
    }
    For(i,1,8)
    {
        For(j,1,8)
        {
            if(a[i][j]==1)
            {
                ll u=i,v=j;
                while(a[u][v]==1) u++;
                re=max(re,u-i+1); u=i;v=j;
                while(a[u][v]==1) v++;
                re=max(re,v-j+1); u=i;v=j;
                while(a[u][v]==1) u--;
                re=max(re,i-u+1); u=i;v=j;
                while(a[u][v]==1) v--;
                re=max(re,j-v+1); u=i; v=j;
                ll d=0;
                while(a[u][v]==1){ d++; u++; v++;}
                re=max(re,d); u=i; v=j; d=0;
                while(a[u][v]==1){ d++; u--; v--;}
                re=max(re,d); u=i; v=j; d=0;
                while(a[u][v]==1){ d++; u++; v--;}
                re=max(re,d); u=i; v=j; d=0;
                while(a[u][v]==1){ d++; u--; v++;}
                re=max(re,d); u=i; v=j; d=0;
            }
        }
    }
    cout<<re;
}


