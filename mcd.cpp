    #include<iostream>
    #include<math.h>
    using namespace std;
    int ucll(int a, int b)
    {
        long long t;
            while(a>0)
        {
            t=a;
            a=b%a;
            b=t;
        }
        return b;
    }
    long long tccs(long long c)
    {
        long long scc,t=0;
        while(c!=0)
        {
            scc=c%10;
            t=t+scc;
            c=c/10;
        }
        return t;
    }
    int main()
    {
        ios_base::sync_with_stdio(0);
        long long a,b,c,ma=0;
        cin>>a>>b;
        c=ucll(a,b);
        for(long long i=1;i<=sqrt(c);i++)
        {
            if(c%i==0)
            {
                ma=max(ma,tccs(i));
                ma=max(ma,tccs(c/i));
            }
        }
        cout<<ma;
    }
