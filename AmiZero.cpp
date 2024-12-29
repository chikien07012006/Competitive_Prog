#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long q,i;
    cin>>q;
    for(long long i=1;i<=q;i++)
    {
        long long l,r,t,k,res=0,flag=0;
        cin>>l>>r>>t>>k;i=l;
        if(t!=k){cout<<0;}
        else
        {
            while(i<=r)
            {
                if(i%10==0&&flag==0)flag=1;
                else i++;
                if(flag==1)
                {
                    if(i%100!=0)res++;
                    i=i+10;
                }
            }
            cout<<res<<' ';
        }
    }
}
