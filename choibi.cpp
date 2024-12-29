#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,i=0,res=LONG_LONG_MIN;string a;
    cin>>n>>a;
    while(i<a.size())
    {
        long long d1=1,d2=0,flag=0;
        for(long long j=i+1;j<a.size();j++)
        {
            if(flag==0)
            {
                if(a[j]==a[i])d1++;
                else{d2++;flag=1;j++;}
            }
            if(flag==1)
            {
              //  cout<<a[j]<<' '<<j<<' '<<a[i];
                if(a[j]=!a[i])
                {
                    d2++;cout<<d2<<endl;if(d2==d1){cout<<d2+d1;return 0;res=max(res,d2+d1);break;}
                }
                if(a[j]==a[i])
                {
                    if(d2==d1){res=max(res,d2+d1);break;}
                    if(d2<d1){res=max(res,d1*2);break;}
                }
            }
        }
        i=i+d1;
    }
    //  cout<<res;
}
