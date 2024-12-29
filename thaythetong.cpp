#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
priority_queue<int, vector<int>, greater<int>> pq;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,t=0,re=0,d=0; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i],t=t+a[i],pq.push(a[i]);
    cout<<t<<' ';
    while (pq.size()>0)
    {
        ll smallest = pq.top();
        pq.pop();
        cout<<pq.size()<<' ';
    //    ll second_smallest;
        //if(pq.size()==0) second_smallest=0;
        //else
        //{
       ll second_smallest = pq.top();
        pq.pop();
        cout<<pq.size()<<' ';
        //}
     //   cout<<smallest<<' '<<second_smallest<<endl;
        ll new_box = smallest + second_smallest;
        re += new_box;
        pq.push(new_box);
        cout<<pq.size()<<endl;
    }
    cout<<re;
}


