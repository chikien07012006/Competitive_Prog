#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    string n; ll k,re=0; cin>>n>>k;
    For(i,0,n.size()-1)
    {
        ll d=0,tam=i-1,d1=0,u;
        while(n[tam]==n[i])
        {
            d++; tam--;
        }
        For(j,i+1,i+k+1)
        {
            if(j>n.size()-1) break;
            if(n[j]==n[i])
            {
                ll z=j+1;
                u=j;
                while(n[z]==n[j])
                {
                    z++;d1++;
                }
                break;
            }
        }
        ll x;
        if(i+k<=n.size()-1)
        {
            x=k;
        }
        else x=n.size()-1-i;
        re=max(re,max(d+d1+u-i+1,d+1+x));
    }
    cout<<re;
}




