//Code was made by Tuanha/

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define in cout<<
#define nhap cin>>
#define fastio ios_base::sync_with_stdio(0);
#define fast cin.tie(NULL),cout.tie(NULL);
ll n,s=0;
signed main()
{
     fastio
     fast
     cin>>n;
     if(n==2) s=1;
     else s=2;
     for(ll i=2;i*i<=n;i++)
     {
          if(n%i==0)
         {
             ll t=n/i;
             if(i==t)
             {
                 if(i+i!=n) s+=2;
                else s++;
                continue;
            }
             s+=2;
             if(t+t!=n) s+=2;
             else s++;
        }
    }
    cout<<s;
}


//






//*/
