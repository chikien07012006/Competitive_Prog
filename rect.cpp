#include <bits/stdc++.h>
using namespace std;
const int maxn=1000005;
int n, i,m,x1,yy1,x2,y2;
long long a[maxn], l[maxn], r[maxn];
long long res,p[maxn];
stack<int> st;
void nhap()
{
    scanf("%d%d\n",&m,&n);
    for(i=1; i<=n; i++)
        scanf("%d ",&a[i]);
}
void khoi_tao_st()
{
    while(!st.empty()) st.pop();
}

void tinh_left()
{
    khoi_tao_st();
    for(int i=1; i<=n; i++)
    {
        while(!st.empty()&&a[st.top()]>=a[i])
        {
            st.pop();
        }
        if(st.empty()) l[i]=1;
        else l[i]=st.top()+1;

        st.push(i);
    }
}
void tinh_right()
{
   khoi_tao_st();
    for(int i=n;i>=1;i--)
    {

        while(!st.empty()&&a[st.top()]>=a[i])
            st.pop();
        if(st.empty()) r[i]=n;
        else r[i]=st.top()-1;
        st.push(i);
    }
}

void giai(char mau)
{
    tinh_left();
    tinh_right();
    p[1]=a[1]*(r[1]-l[1]+1);
    int maxx=1;
    for(int i=2;i<=n;i++)
    {
        p[i]=a[i]*(r[i]-l[i]+1);
        if(p[i]>p[maxx]) maxx=i;
    }
    if(p[maxx]>res)
    {
        res=p[maxx];
        if (mau=='v')
        {
            //cout<<maxx<<" "<<l[2]<<endl;
            x1=1;yy1=l[maxx];
            x2=a[maxx];y2=r[maxx];
        }
        else
        {
            x1=m-a[maxx]+1;yy1=l[maxx];
            x2=m;y2=r[maxx];
        }
    }
    //printf("%d %d %d\n",p[maxx], l[maxx], r[maxx]);
}
void tao_cot_xanh()
{
    for(int i=1;i<=n;i++)
        a[i]=m-a[i];
}
int main(){
    freopen("RECT.inp","r",stdin);
    freopen("RECT.out","w",stdout);
    nhap();
    giai('v');
    tao_cot_xanh();
    giai('x');
    cout<<res<<endl;
    cout<<x1<<" "<<yy1<<endl;
    cout<<x2<<" "<<y2<<endl;
}
