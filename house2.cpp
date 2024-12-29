#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,n,i,j;
    scanf("%lld",&n);
    k=n/2+1;
    for(int i=1;i<=n/2;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==k||j==n-k+1)printf("*");
            else printf("-");
        }
        k--;
        printf("\n");
    }
    for (int j=1;j<=n;j++)
        printf("*");
        printf("\n");
    k=2;
    for(int i=1;i<=n-2;i++)
    {
        printf("*");
        for(int j=2;j<=n-1;j++)
        {
            if(k==j||j==n-k+1)printf("*");
            else printf("-");
        }
        k++;
        printf("*\n");
    }
    for (int j=1;j<=n;j++)
        printf("*");
        printf("\n");
}

