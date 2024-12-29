#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll d[123],res=0;
int main()
{
    ios_base::sync_with_stdio(0);
    string a;cin>>a;
    for(ll i=0;i<a.size()-1;i++)
    {
        for(ll t=97;t<=122;t++)d[t]=0;
        for(ll j=i+1;j<a.size();j++)
        {
            if(a[j]!=a[i]){
                    if(d[a[j]]==0)res++;
                    d[a[j]]++;
            }
            else break;
        }
    }
    cout<<res;
}
