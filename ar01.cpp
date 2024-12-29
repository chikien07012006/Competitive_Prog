#include<stdio.h>
int a[100000000];
int main()
{
    int t,s=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++) scanf("%d",&a[i]);
    if(a[i]%2==0)  s=s+a[i];
    printf("%d",s);
}
