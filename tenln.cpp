#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[100009];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n;cin>>n;
    string a;
    cin>>a;
    for(ll i=0;i<a.size();i++)if(a[i]=='L'||a[i]=='T'||a[i]=='N')dp[i]=1;
    for(ll i=0;i<a.size();i++)
    {
        if(a[i]=='L')
        {
            for(ll j=i-1;j>=0;j--)
            {
                if(a[j]=='L')
                {
                    dp[i]=dp[j]+1;break;
                }
            }
        }
        if(a[i]=='T')
        { ll fl=0,fl1=0,t1=0,t=0;
            for(ll j=i-1;j>=0;j--)
            {
             if(a[j]=='T'&&fl==0){t=dp[j];fl=1;}
             if(a[j]=='L'&&fl1==0){t1=dp[j];fl1=1;}
             if(fl1==1&&fl==1)break;
            }
            dp[i]=max(t,t1)+1;
        }
        if(a[i]=='N')
        { ll fl=0,fl1=0,t1=0,t=0,fl2=0,t2=0;
            for(ll j=i-1;j>=0;j--)
            {
             if(a[j]=='T'&&fl==0){t=dp[j];fl=1;}
             if(a[j]=='L'&&fl1==0){t1=dp[j];fl1=1;}
             if(a[j]=='N'&&fl2==0){t2=dp[j];fl2=1;}
             if(fl1==1&&fl==1&&fl2==1)break;
            }
            dp[i]=max(t,max(t1,t2))+1;
        }
    }
   ll fl=0,fl1=0,t1=0,t=0,fl2=0,t2=0;
            for(ll j=a.size()-1;j>=0;j--)
            {
             if(a[j]=='T'&&fl==0){t=dp[j];fl=1;}
             if(a[j]=='L'&&fl1==0){t1=dp[j];fl1=1;}
             if(a[j]=='N'&&fl2==0){t2=dp[j];fl2=1;}
             if(fl1==1&&fl==1&&fl2==1)break;
            }
            cout<<max(t,max(t1,t2));
}
