#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll a,b,c;
    cin>>a>>b>>c;
    cout<<(a%c+b%c)%c<<' '<<((((a%c)-(b%c))%c)+c)%c<<' '<<(a%c*b%c)%c;
}
