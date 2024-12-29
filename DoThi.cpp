#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define ll long long
ll d[10][10];
int main()
{
    ios_base::sync_with_stdio(0);
    d[6][4]=1;d[4][6]=1;
    d[5][4]=1;d[4][5]=1;
    d[4][3]=1;d[3][4]=1;
    d[5][2]=1;d[2][5]=1;
    d[3][2]=1;d[2][3]=1;
    d[5][1]=1;d[1][5]=1;
    d[2][1]=1;d[1][2]=1;
    For(i,1,6)
    {
        For(j,1,6)
    cout<<d[i][j]<<' ';
    cout<<endl;
    }
}
