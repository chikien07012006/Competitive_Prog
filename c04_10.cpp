#include<stdio.h>
int main()
{
    int a, tram, chuc, donvi;
    scanf("%d",&a);
    tram=a/100;
    chuc=a%100/10;
    donvi=a%100%10;
    if((tram>chuc)&&(tram>donvi)) printf("%d TRAM",tram);
    if((chuc>tram)&&(chuc>donvi)) printf("%d CHUC",chuc);
    if((donvi>tram)&&(donvi>chuc)) printf("%d DONVI",donvi);
}
