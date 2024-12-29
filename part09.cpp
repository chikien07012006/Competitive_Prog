#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    char a,b;long long t=0;
    cin>>a>>b;
    if((a=='K'||a=='Q'||a=='J')&&(b=='J'||b=='K'||b=='Q')){cout<<'x';return 0;}
    if(a=='J'||a=='Q'||a=='K');
    if(a=='x')t=t+1;
    if(a=='1'||a=='2'||a=='3'||a=='4'||a=='5'||a=='6'||a=='7'||a=='8'||a=='9')t=t+int(a)-48;
    if(b=='J'||b=='Q'||b=='K');
    if(b=='x')t=t+1;
     if(b=='1'||b=='2'||b=='3'||b=='4'||b=='5'||b=='6'||b=='7'||b=='8'||b=='9')t=t+int(b)-48;
    if(t%10==0) {cout<<'J';return 0;}
    if(t%10==9) {cout<<'x';return 0;}
    cout<<10-(t%10);
}
