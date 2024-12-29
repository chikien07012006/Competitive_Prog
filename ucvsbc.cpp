#include <stdio.h>;
long long  a,b,c,d,k,s1,s2;
long long ucln(long long x,long long y)
{
    while (y != 0)
    {
        k = x % y;
        x = y;
        y = k;
    }
    return x;
}
int main()
{
    scanf("%lld %lld",&a,&b);
    s1=a;
    s2=b;
    c=ucln(a,b);
    d=(s1*s2)
    printf("%lld %lld ",c,d);
    return(0);
}
