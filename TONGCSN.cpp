#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
string ok(ll n)
{
    string t,t1;
    while(n>0)
    {
        t=t+char(n%10+48);n=n/10;
    }
    for(ll i=t.size()-1;i>=0;i--)t1=t1+t[i];
    return t1;
}
ll tong1(ll tam2)
{
    ll tong=0,j=0;
    string u=ok(tam2);
    For(i,1,long(u[0]-48)-1)
    {
        j=j+i;
    }
    if(tam2<10)
    {
        return j+tam2;
    }
    tong=tong+j*pow(10,u.size()-1);
    tong=tong+long(u[0]-48)*pow(10,u.size()-2)*45*(u.size()-1);
    ll h=pow(10,u.size()-1);
    tong=tong+long(u[0]-48)*(tam2%h+1);
    return tong;
}
int main()
{
  //  freopen("TONGCSN.inp","r",stdin);
    //freopen("TONGCSN.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n,tam=0,re=0; cin>>n;
    ll t=1;
    while((pow(10,t)-pow(10,t-1))*t+tam<n)
    {
        tam=tam+(pow(10,t)-pow(10,t-1))*t;
        t++;
    }
    ll tam2=pow(10,t-1)+(n-tam)/t-1;cout<<tam2;
    string u=ok(tam2);
    For(i,0,u.size()-1)
    {
        ll tam3=0;
        For(j,i,u.size()-1)
        {
            tam3=tam3*10+long(u[j]-48);
        }
        re=re+tong1(tam3);
    }
    cout<<re<<endl;
    ll f=(n-tam)%t;
    string z=ok(tam2+1);
    For(i,0,z.size()-1)
    {
        if(f==0)break;
        re=re+long(z[i]-48);
        f--;
    }
    cout<<re;
}
