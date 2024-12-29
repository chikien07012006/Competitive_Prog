#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a==b)||(b==c)) printf("CAN");
    if((a==b)&&(b==c)&&(a==c)) printf("DEU");
    if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a)) printf("VUONG");
    else printf("THUONG");
}
