                                        #include<bits/stdc++.h>
                                        #define ll long long
                                        using namespace std;
                                        int main()
                                        {
                                            ios_base::sync_with_stdio(0);
                                            cin.tie(NULL);
                                            cout.tie(NULL);
                                            ll t;
                                            cin>>t;
                                            for(ll i=1;i<=t;i++)
                                            {
                                                ll ax,ay,mx,my;
                                                cin>>ax>>ay>>mx>>my;
                                                if(ax==mx)
                                                {
                                                    cout<<ax<<' ';
                                                    ll h=abs(abs(my)-abs(ay));
                                                    if(my>=ay)cout<<my+h<<endl;
                                                    else cout<<my-h<<endl;
                                                }
                                                else
                                                {if(ay==my)
                                                {
                                                    ll h=abs(abs(mx)-abs(ax));
                                                    if(mx>=ax)cout<<mx+h<<' ';
                                                    else cout<<mx-h<<' ';
                                                    cout<<ay<<endl;
                                                }
                                                else
                                               {
                                                   if(ax==ay&&mx==my)
                                                {
                                                    cout<<mx+1<<' '<<my+1<<endl;
                                                }
                                                else
                                                {if(ax!=ay&&my!=mx)
                                                {
                                                    if(mx>ax)cout<<mx+abs(abs(mx)-abs(ax))<<' ';
                                                    else cout<<mx-abs(abs(mx)-abs(ax))<<' ';
                                                    if(my>ay)cout<<my+abs(abs(my)-abs(ay))<<endl;
                                                    else cout<<my-abs(abs(my)-abs(ay))<<endl;
                                                }
                                                }
                                               }
                                            }
                                            }
                                        }
