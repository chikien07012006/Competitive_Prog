#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long k,d=0,res=0,dem=0,d0=0; string n;
    cin>>k>>n;
        for(long long i=0;i<n.size();i++)
    {
        dem+=n[i]-'0';
        if(n[i]=='1') d0=0;
        if(dem>=k)
        {
            if(dem>k){d++;dem--;}
             while(d<=i&&n[d]=='0'){d0++;d++;}
            res+=d0+(k!=0);
        }
    }
    cout<<res;
}
