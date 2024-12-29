    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        long long n,k,d=1,d1=1;
        cin>>n>>k; long long a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1]) d++;
            if(a[i]!=a[i+1]){d1++;d++;} //d1++;
        }
        if(d1>k){cout<<"NO"; return 0;}
        if(d<k){cout<<"NO";return 0;}
        cout<<"YES";
    }
