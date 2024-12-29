#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    string n;cin>>n;ll t=0,t1=0;
    t=(n[1]-48)*10+(n[0]-48);
    t1=(n[3]-48)*10+(n[4]-48);
   // cout<<t<<endl<<t1;return 0;

    if(t1<t&&t<=59)
    {
      cout<<n[0]<<n[1]<<':'<<n[1]<<n[0];
    }
    else{if(t==51||t==61||t==71||t==81||t==91){cout<<"20:02";return 0;}
    if(t==50||t==60||t==70||t==80||t==90){cout<<"10:01";return 0;}
        if(t==32)cout<<"00"<<':'<<"00";
        else {if(n[0]=='0')cout<<n[0]<<char(n[1]+1)<<':'<<char(n[1]+1)<<n[0];else {ll h=(n[0]-48)*10+(n[1]-48)+1;cout<<h<<':'<<h%10<<h/10;}}
    }
}
