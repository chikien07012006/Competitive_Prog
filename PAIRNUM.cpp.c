#include<stdio.h>
long long n,i,j,dem;
long long a[100005];
int main()
{
    scanf("%lld",&n);
    for(i=1;i<=n;i++) scanf("%lld",&a[i]);
    for(i=1;i<=n;i++)
        for(j=i+1;j<=n;j++)
        if(a[i]==a[j]) dem++;
    scanf("%lld",dem);
}
