#include<bits/stdc++.h>
using namespace std;
bool visited[100000];
vector <int> vec[100000];
void dfs(int s)
{
    //cout<<"yes"<<endl;
    if(visited[s])return;
    visited[s] = true;
    for(auto x : vec[s]) dfs(x);
}
int main()
{
    // freopen("inputfile.txt","r",stdin);
    int edges,node;
    //cout<<"enter the nodes & edges: ";
    cin>>node>>edges;
    for(int i=0;i<edges;i++)
    {
        int n1,n2;
        cin>>n1>>n2;
        vec[n1].push_back(n2);
        vec[n2].push_back(n1);
    }
    dfs(1);
    //printing the list of connected component..
    for(int i=1;i<=node;i++)
    {
       cout<<i<<"-> ";
       for(auto x: vec[i])cout<<x<<" ";
       cout<<endl;
    }
    cout<<endl<<endl;
    for(int i=1;i<=node;i++)cout<<visited[i]<<endl;
}
/*
void dfs(map<ll,vector<ll>>&ma,map<ll,ll>&flag,ll &node,map<ll,ll>&visited,ll &ans)
{
    //cout<<node<<" "<<ans<<endl;
    visited[node] = 1;
    ans = max(ans,node);
    if(flag[node]==0)return;
    for(auto x:ma[node])
    {
        ll k = x+node;
        if(visited[k]==0)dfs(ma,flag,k,visited,ans);
    }
}


int main()
{
    IOS;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vi v(n);
        ll ans = 0;
        for(auto &x:v)cin>>x;
        map<ll,vector<ll>>ma;
        map<ll,ll>flag;
        for(ll i = 1;i<n;i++)
        {
            ll idx = v[i]+i;
            ma[idx].pb(i);
            flag[idx] = 1;
        }
        // for(auto x:ma)
        // {
        //     // cout<<x.first<<"- ";
        //     for(auto y:x.second)cout<<y<<" ";
        //     cout<<endl;
        // }
        map<ll,ll>visited;
        dfs(ma,flag,n,visited,ans);
        cout<<ans<<endl;
    }
   // https://codeforces.com/contest/2027/problem/C
}*/
