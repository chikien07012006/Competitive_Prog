    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        long long k,n,sum=0;
        cin>>n>>k;
        long long a[n];
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sum=a[0];
        sort(a+1,a+n,greater<int>());
        for(long long i=1;i<=k;i++)
        {
         sum=sum+a[i];
        }
        for(int j=k+1;j<n;j++)
        {
            sum=sum-a[j];
        }
        cout<<sum;
    }
