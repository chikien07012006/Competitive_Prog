       #include<bits/stdc++.h>
       using namespace std;
       typedef long long ll;
       int main()
       {
           ios_base::sync_with_stdio(0);
           ll n,re=0;
           cin>>n;ll t;
           for(int i=2; i<=n; i=i+2)
           {
                t=i;
                while(t%2==0){
                re++;t=t/2;
                }
           }
           cout<<re;
       }
