#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,k,scc,j=0;
    vector<long long> g;
    cin>>n>>m>>k;
    for(int i=n;i<=m;i++)
    {
        cout<<i<<endl;

        if(i==m-1)
        {
            return 0;
        }
        while(i!=0)
        {
            scc=i%10;
            g.push_back(scc);
            i=i/10;
        }
        }
    sort(g.begin(),g.end(),greater<int>());
    if(k>j)
    {
        cout<<"NO";
    }
    else{cout<<g[k];}
}
