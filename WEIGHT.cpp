#include <bits/stdc++.h>
using namespace std;
const int maxn=1000005;
long long resmax,resmin;
int n;
long long a[maxn], lmin[maxn], rmin[maxn],lmax[maxn],rmax[maxn];
stack<int> st;
void nhap()
{
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
}
void khoi_tao_st()
{
    while(!st.empty()) st.pop();
}

void tinh_left_min()
{
    khoi_tao_st();
    for(int i=1; i<=n; i++)
    {
        while(!st.empty()&&a[st.top()]>=a[i])
        {
            st.pop();
        }
        if(st.empty()) lmin[i]=1;
        else lmin[i]=st.top()+1;

        st.push(i);
    }
}
void tinh_right_min()
{
   khoi_tao_st();
    for(int i=n;i>=1;i--)
    {
        while(!st.empty()&&a[st.top()]>a[i])
            st.pop();
        if(st.empty()) rmin[i]=n;
        else rmin[i]=st.top()-1;
        st.push(i);
    }
}
void tinh_left_max()
{
    khoi_tao_st();
    for(int i=1; i<=n; i++)
    {
        while(!st.empty()&&a[st.top()]<=a[i])
        {
            st.pop();
        }
        if(st.empty()) lmax[i]=1;
        else lmax[i]=st.top()+1;

        st.push(i);
    }
}
void tinh_right_max()
{
   khoi_tao_st();
    for(int i=n;i>=1;i--)
    {
        while(!st.empty()&&a[st.top()]<a[i])
            st.pop();
        if(st.empty()) rmax[i]=n;
        else rmax[i]=st.top()-1;
        st.push(i);
    }
}

void giai()
{
    tinh_left_min();

    tinh_right_min();
    tinh_left_max();
    tinh_right_max();

    for(int i=1;i<=n;i++)
    {
        resmin=resmin+a[i]*(i-lmin[i]+1)*(rmin[i]-i+1);
        resmax=resmax+a[i]*(i-lmax[i]+1)*(rmax[i]-i+1);
    }
    cout<<(resmax-resmin);
}
int main(){
   freopen("weight.inp","r",stdin);
   freopen("weight.out","w",stdout);
    nhap();
    giai();
}
