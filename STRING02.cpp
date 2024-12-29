 #include<bits/stdc++.h>
 #include<iostream>
 using namespace std;
 int main()
 {
     string a;
     int d=0;
     getline(cin,a);
     for(int i=0;i<a.size();i++)
     {
         if(a[i]==' ')
         {
             d++;
         }
     }
     cout<<d;
 }
