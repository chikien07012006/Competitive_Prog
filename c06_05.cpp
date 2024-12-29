#include<stdio.h>
int main()
{
    long long dvi=0,n,scs=0,t=0;
    scanf("%lld",&n);
    while (n!=0)
    {
        dvi=n%10;
        t = t + dvi;
        n=n/10;
        scs++;

    }
    printf("%lld\n%lld",scs,t);
}
