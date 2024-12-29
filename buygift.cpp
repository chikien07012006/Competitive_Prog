#include<bits/stdc++.h>
using namespace std;
vector<long long>b;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,m,tam,s=0;
    cin>>n>>m;long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<n;i++)
    {
        tam=a[i]-a[i-1]; b.push_back(tam);
    //    cout<<tam<<endl;
    }
    sort(b.begin(),b.end());
    for(int i=0;i<m-1;i++) s=s+b[i];
    cout<<s; return 0;
}
