#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
    ios_base::sync_with_stdio(0);
    set<int> a;

    // insert elements in random order
    a.insert(40);
    a.insert(30);
    a.insert(10);
    a.insert(20);
    a.insert(50);

    // only one 50 will be added to the set
    a.insert(10);
    a.insert(10);

    // printing set s1
    set<int>::iterator itr;
    for (itr = a.begin(); itr != a.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
}
