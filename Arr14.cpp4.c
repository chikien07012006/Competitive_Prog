#include<stdio.h>
int a[100000000];
int b[100000000];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=n;i++) b[i]=b[i-1]+a[i];
    printf("%d",b[i]);
}

