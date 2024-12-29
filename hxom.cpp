#include<stdio.h>
int main()
{
    long long a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(a%c==b%c) printf("YES");
    else printf("NO");
}
