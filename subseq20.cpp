 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     long long n,k,u=0,v=0,t=0,mi=1000000001;
     cin>>n>>k;long long a[n];
     for(int i=0;i<n;i++) cin>>a[i];
     while(v<n)
     {
         if(t<k)
         {
             t=t+a[v];v++;
         }
         if(t>=k)
         {
             if((v-u)<=mi)
             {
                 mi=v-u;
             }
             t=t-a[u];u++;
         }
     }
     cout<<mi;
 }
