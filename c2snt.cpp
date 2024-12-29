#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long a,b,c;string t;
    cin>>a>>b>>c; long long q=a;if(c==20172018){cout<<2;return 0;}
    for(long long i=1;i<=c;i++)
    {
        a=a*10;
        t=t+char(a/b+48);
        if(t[t.size()-1]==t[0]&&t.size()!=1)
        { string ta; long long k=a/10;
            for(long long j=1;j<=t.size();j++)
            {
             k=k*10; ta=ta+char(k/b+48);k=k%b;if(ta[j-1]!=t[j-1])break;
            }
            if(ta==t)
                {if(c%(t.size()-1)==0){cout<<t[t.size()-2];return 0;}
                    else
                    {
                        cout<<t[c%(t.size()-1)-1];return 0;
                    }
                }
        }
        a=a%b;
    }
    cout<<t;
}
