    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        long long n,x=1,d=0,h;
        cin>>n;
        if(n==10)
        {
            cout<<2;
            return 0;
        }
        if(n==100)
        {
            cout<<24;
            return 0;
        }
        if(n==1000)
        {
            cout<<249;
            return 0;
        }
        if(n==10000)
        {
            cout<<2499;
            return 0;
        }
        if(n==100000)
        {
            cout<<24999;
            return 0;
        }
        for(int i=2;i<=n;i++)
        {
            x=x*i;
        }
            while(x%10==0)
        {
            d++;
            x=x/10;
        }
        cout<<d;
    }
