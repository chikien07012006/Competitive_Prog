#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
const ll N=1e6+5;
ll n,k,re=0;
ll a[N],f1[N],f2[N];
deque<ll>qmax;
deque<ll>qmin;
void push(ll x)
{
    while(!qmin.empty()&&a[qmin.back()]>=a[x])qmin.pop_back();
    while(!qmax.empty()&&a[qmax.back()]<=a[x])qmax.pop_back();
    qmin.push_back(x);
    qmax.push_back(x);
}
void pop(ll x)
{
    if(qmin.front()==x)qmin.pop_front();
    if(qmax.front()==x)qmax.pop_front();
}
ll get()
{
    return a[qmax.front()]-a[qmin.front()];
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>k;
    For(i,1,n)
    {
        cin>>a[i];
    }
    /*For(i,1,n)
    {
        push(i);
        cout<<a[qmin.front()]<<' '<<a[qmax.front()]<<endl;
    }*/
    for(ll i=1,j=1;i<=n;i++)
    {
        push(i);
        while(get()>k)
        {
            pop(j);
            j++;
        }
        re=max(re,i-j+1);
    }
    cout<<re;
}

