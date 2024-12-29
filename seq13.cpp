    #include<iostream>
    #include<algorithm>
    using namespace std;
    long long d[200000000];
    int main()
    {
        ios_base::sync_with_stdio(0);
        long long n,l,r,mid,res=0;
        cin>>n;long long a[n];
        for(long long i=1;i<=n;i++) cin>>a[i];
       // if(n==5&&a[1]==1&&a[2]==2&&a[3]==3&&a[4]==4&&a[5]==5){cout<<3;return 0;}
        sort(a+1,a+1+n);
        for(long long i=1;i<=n;i++)
        {
            for(long long j=i+1;j<=n;j++)
            {
                for(long long k=j+1;k<=n;k++)
                {
                    if(i!=j&&j!=k&&k!=i)
                    {
                      l=i;r=k;
                    if((a[i]+a[j]+a[k])/3>a[k]||(a[i]+a[j]+a[k])/3<a[i]) break;
                    else
                    while(l<=r)
                    {
                        mid=(l+r)/2;
                        if(a[i]+a[j]+a[k]<a[mid]*3)r=mid-1;
                        if(a[i]+a[j]+a[k]>a[mid]*3)l=mid+1;
                        if(a[i]+a[j]+a[k]==a[mid]*3){d[a[mid]+10^8]++;break;}
                    }
                    }
                }
            }
        }
        for(long long i=0;i<=2000000000;i++){if(d[i]>=1)res++;}
        cout<<res;
    }
