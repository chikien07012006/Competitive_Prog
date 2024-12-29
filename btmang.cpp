#include<stdio.h>
int a[100000000];
int main()
{
    int n;
    scanf("&d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++);
    {
    printf("%d",a[i]);
    }
}
