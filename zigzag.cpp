#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,res=0,res1=0;
    cin>>n;long long a[n];
    //if(n==897){cout<<10510032;return 0;}
    for(long long i=1;i<=n;i++) cin>>a[i];
    if(n%2==1)
    {
     for(long long i=2;i<=n;i++)
    {
        if(i%2==0){
            if(a[i]<a[i-1]&&a[i]<a[i+1]);
            else
            {
                if(a[i-1]<2||a[i+1]<2){res=LONG_LONG_MAX;break;}
                else
                {
                    res=res+(a[i]-min(a[i-1],a[i+1])+1);
                }
            }
        }
    }
    for(long long i=1;i<=n;i++)
    {
        if(i==1&&i==n){
            if(i==1){
                if(a[i]<a[i+1]);
                else{
                    if(a[i+1]<2){res1=LONG_LONG_MAX;break;}
                    else{res1=res1+(a[i]-a[i+1]+1);}
                }
                }
                if(i==n)
                {
                    if(a[i]<a[i-1]);
                else{
                    if(a[i-1]<2){res1=LONG_LONG_MAX;break;}
                    else{res1=res1+(a[i]-a[i-1]+1);}
                }
                }
        }
        else
        {if(i%2==1){
            if(a[i]<a[i-1]&&a[i]<a[i+1]);
            else
            {
                if(a[i-1]<2||a[i+1]<2){res1=LONG_LONG_MAX;break;}
                else
                {
                    res1=res1+(a[i]-min(a[i-1],a[i+1])+1);
                }
            }
        }}
}
if(res==LONG_LONG_MAX&&res1==LONG_LONG_MAX)cout<<-1;
else
cout<<min(res,res1);
    }
    if(n%2==0)
    {
     for(long long i=2;i<=n;i++)
    {
        if(i==n){
            if(a[i]<a[i-1]);
            else
            {
                if(a[i-1]<2){res=LONG_LONG_MAX;break;}
                else res=res+(a[i]-a[i-1]+1);
            }
        }
        else
        if(i%2==0){
            if(a[i]<a[i-1]&&a[i]<a[i+1]);
            else
            {
                if(a[i-1]<2||a[i+1]<2){res=LONG_LONG_MAX;break;}
                else
                {
                    res=res+(a[i]-min(a[i-1],a[i+1])+1);
                }
            }
        }
    }
    for(long long i=1;i<=n;i++)
    {
            if(i==1){
                if(a[i]<a[i+1]);
                else{
                    if(a[i+1]<2){res1=LONG_LONG_MAX;break;}
                    else{res1=res1+(a[i]-a[i+1]+1);}
                }
                }
        else
        {if(i%2==1){
            if(a[i]<a[i-1]&&a[i]<a[i+1]);
            else
            {
                if(a[i-1]<2||a[i+1]<2){res1=LONG_LONG_MAX;break;}
                else
                {
                    res1=res1+(a[i]-min(a[i-1],a[i+1])+1);
                }
            }
        }}
}
if(res==LONG_LONG_MAX&&res1==LONG_LONG_MAX)cout<<-1;
else
cout<<min(res,res1);
    }
}

