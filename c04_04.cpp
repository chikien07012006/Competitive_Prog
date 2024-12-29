#include<stdio.h>
int main()
{
    long long a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    if( a*a + b*b == c*c|| a*a + c*c == b*b || b*b + c*c == a*a) printf("YES");
    else printf("NO");
    return 0;
}
