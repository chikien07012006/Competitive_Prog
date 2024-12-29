#include<stdio.h>
#include<math.h>
int main()
{
    long long a,b,c,d;
    scanf("%lld%lld",&a,&b);
    c=fmax(a,b);
    d=fmin(a,b);
    printf("%lld %lld",d,c);
}
