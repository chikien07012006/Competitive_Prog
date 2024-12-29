#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
char d[1000];
ll check[1000];
map<string,ll>dem;
ll re=0;
void sinh(ll pos, string n, ll u,ll bd)
{
    For(i,bd,n.size()-1)
    {
            d[pos]=n[i];
            if(pos==u)
            {
                string tam;
                For(i,1,pos)
                {
                    tam+=d[i];
                }
                dem[tam]++;
            }
            else
            {
                sinh(pos+1,n,u,i+1);
            }
        }

}
void sinh1(ll pos, string n, ll u,ll bd)
{
    For(i,bd,n.size()-1)
    {
            d[pos]=n[i];
            if(pos==u)
            {
                string tam;
                For(i,1,pos)
                {
                    tam+=d[i];
                }
                re+=dem[tam];
            }
            else
            {
                sinh1(pos+1,n,u,i+1);
            }
        }

}
void h1(string s,string n)
{
    For(i,1,s.size()-1)
    {
        sinh(1,s,i,0);
    }
    For(i,1,n.size()-1)
    {
        sinh1(1,n,i,0);
    }
    cout<<re;
    exit(0);
}
void h2(string s,string t)
{
    ll d=0;
    For(i,0,t.size()-1)
    {
        if(s[0]==t[i])d++;
    }
    cout<<d;
    exit(0);
}
void h3(string s,string t)
{
    ll d=0;
    For(i,0,t.size()-1)
    {
        if(s[0]==t[i])d++;
    }
    For(i,0,t.size()-1)
    {
        if(s[1]==t[i])d++;
    }
    For(i,0,t.size()-1)
    {
        For(j,i+1,t.size()-1)
        {
            if(t[i]==s[0]&&t[j]==s[1])d++;
        }
    }
    cout<<d;
    exit(0);
}
ll de1[7000];
ll mod=1e9+7;
ll x,y;
void nghichdao(ll a,ll b)
{
    if(b==0)
    {
        x=1;
        y=0;
    }
    else
    {
        nghichdao(b,a%b);
        ll tmp=x;
        x=y;
        y=tmp-(a/b)*y;
    }
}
ll tohop(ll n, ll k)
{
    ll t1=1,t2=1;;
    For(i,n-k+1,n) t1=(t1%mod*i%mod)%mod;
    For(i,1,k) t2=(t2%mod*i%mod)%mod;
    nghichdao(t2,mod);
    x=(x%mod+mod)%mod;
    return(x%mod*t1%mod)%mod;
}
void h4(string s,string t)
{
    ll ans=0;
    char tam=s[0];
    For(i,1,s.size())
    {
        de1[i]=tohop(s.size(),i);
    }
    ll tong=0;
    For(i,0,t.size()-1)
    {
        if(t[i]==tam) tong++;
    }
    For(i,1,tong)
    {
        ans=(ans%mod+(tohop(tong,i)*de1[i])%mod)%mod;
    }
    cout<<ans;exit(0);
}
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    string s,n; cin>>s>>n;
    if(s.size()<=20&&n.size()<=20)
    {
        h1(s,n);
    }
    if(s.size()==1)
    {
        h2(s,n);
    }
    if(s.size()==2)
    {
        h3(s,n);
    }
    if(s[1]==s[2]&&s[1]==s[s.size()-1]&&s.size()<=7000)
    {
        h4(s,n);
    }
}

