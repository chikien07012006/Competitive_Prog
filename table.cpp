    #include<bits/stdc++.h>
    using namespace std;
    long long a[1600];
    void snt()
    {
        for(long long i=1;i<=1600;i++)
        {
                for(long long j=i;j<=1600;j=j+i)
                {
                    a[j]++;
                }
            }
        }
    int main()
    {
        long long n,k,d=1;
        cin>>n>>k;
        snt();
        for(long long i=1;i<=n*n;i++)
        {
            if(a[i]<=k) cout<<'*';
            else cout<<'.';
            if(i%n==0) cout<<endl;
        }
    }
