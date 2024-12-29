#include<stdio.h>
long n,scc,a[10000],d=0;
int i;
int main()
{
    scanf("%ld",&n);
    int m=n;
    while(n!=0)

    {
        scc=n%10;
        a[i]=scc;
        n=n/10;
        i++;
    }
    //i==2, n==0
    for(int j=0;j<i;j++)
    {
        if(a[j]==0)
            continue;
        if(m%a[j]==0)
            d++;
    }
    printf("%ld",d);
}
