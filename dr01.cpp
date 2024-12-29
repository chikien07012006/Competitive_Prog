    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        vector<long long> a;
        long long n,max=0,vt;
        cin>>n;
        long long t,tong=0;
        for (int i=0;i<n;i++)
        {
            cin>>t;
            a.push_back(t);
            if(max<a[i])
            {
                max=a[i];
                vt=i+1;
            }


        }
        cout<<max<<"\n";
        cout<<vt;
    }
