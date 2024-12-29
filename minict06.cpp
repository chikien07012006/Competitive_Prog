f    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll T; cin>>T;
    while(T--)
    {
    string n; ll res=1e18;
    cin>>n; if(n.size()==1){cout<<0<<"\n";continue;}
    if(n[0]=='0'){d[0]=1;d1[0]=0;} if(n[0]=='1'){d1[0]=1;d[0]=0;}
    FOR(i,1,n.size()-1)
    {
        if(n[i]=='0'){d[i]=d[i-1]+1;d1[i]=d1[i-1];}
        if(n[i]=='1'){d1[i]=d1[i-1]+1;d[i]=d[i-1];}
    }
    if(n[n.size()-1]=='0'){d2[n.size()-1]=1;d3[n.size()-1]=0;} if(n[n.size()-1]=='1'){d3[n.size()-1]=1;d2[n.size()-1]=0;}
    for(ll i=n.size()-2;i>=0;i--)
    {
        if(n[i]=='0'){d2[i]=d2[i+1]+1;d3[i]=d3[i+1];}
        if(n[i]=='1'){d3[i]=d3[i+1]+1;d2[i]=d2[i+1];}
    }
    FOR(i,0,n.size()-2)
    {
        res=min(res,d[i]+d3[i+1]);
        res=min(res,d1[i]+d2[i+1]);
    }
    res=min(res,min(d[n.size()-1],d1[n.size()-1]));
    cout<<res<<"\n";
    }
}
