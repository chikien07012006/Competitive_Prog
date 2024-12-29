    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define For(i,a,b) for(ll i=a;i<=b;i++)
    int main()
    {
        ios_base::sync_with_stdio(0);
        ll d1=0,d0=0,re=0,dangxet;
        string n; cin>>n;
        if(n[0]=='0')dangxet=0;
        else dangxet=1;
        For(i,0,n.size()-1)
        {
            if(n[i]=='0')
            {
                if(dangxet==1)
                {
                    dangxet=0;
                    d0=0;
                }
                d0++;
            }
            if(n[i]=='1')
            {
                if(dangxet==0)
                {
                    dangxet=1;
                    d1=0;
                }
                d1++;
            }
            re=max(re,min(d1,d0)*2);
        }
        cout<<re;
    }





