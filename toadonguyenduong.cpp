    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define For(i,a,b) for(ll i=a;i<=b;i++)
    bool kt(double n)
    {
        ll t=int(n);
        if(n==t)return 1;
        return 0;
    }
    int main()
    {
        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        double x1,y1,x2,y2,re=0; cin>>x1>>y1>>x2>>y2;
        double a,b;
        a=(y1-y2)/(x1-x2);
        b=y1-a*x1;
        if(x2-x1<=y1-y2)
        {
            if(x1<=0)x1=0;
            For(i,x1+1,x2-1)
            {
                if(kt(a*double(i)+b)==1&&a*double(i)+b>0) re++;
            }
            cout<<re;return 0;
        }
        if(y2<=0) y2=1;
        For(i,y2+1,y1-1)
        {
            if(kt((double(i)-b)/a)==1&&(double(i)-b)/a>0)re++;
        }
        cout<<re;
    }
