#include<bits/stdc++.h>
#include<math.h>
#define ll long long
ll i,a,n,m,dem,ma;
bool ok=false;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
  cin>>n;
  ma=trunc(sqrt(n*8+1)+1)/2;
  dem=0;
  for (i=ma-1;i>=2;i--)
    if ((n-i*(i-1)/2)%i==0)
    {
      a=(n-i*(i-1)/2)/ i;
      cout<<i;
      ok=true;
      break;
    }
  if (ok==false) cout<<0;
}
