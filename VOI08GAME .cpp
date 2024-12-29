    #include<bits/stdc++.h>
    using namespace std;
    vector<long long>u;
    int main()
    {
        long long n,c;
        cin>>n;
        long long a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                c=abs(a[i]+b[j]);
                u.push_back(c);
            }
          }
          sort(u.begin(),u.end());
       cout<<u[0];
    }
