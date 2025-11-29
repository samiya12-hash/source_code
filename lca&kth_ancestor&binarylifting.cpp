#include <bits/stdc++.h>
using namespace std;


#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define loop(i, n) for (i = 0; i < n; i++)
#define INF 1000000000

using ll = long long int;
typedef pair<ll, ll> pii;
typedef vector<pii> vii;

typedef vector<ll> vi;


bool sortsec(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.second == b.second)
        return a.first > b.first;
    else
        return (a.second > b.second);
}

#define eb emplace_back
#define mp make_pair
#define pb push_back
#define MAX 10000
#define MOD 1000000007
#define endl '\n'
ll dx[4] = {-1, 1, 0, 0};
ll dy[4] = {0, 0, 1, -1};
ll lowbit(ll x){
    return x&(-x);
}


ll binpow(ll a, ll b) {
    if (b == 0)
        return 1LL;
    ll res = binpow(a, b / 2LL)%MOD;
    if (b % 2LL)
        return ((res * res)%MOD * a)%MOD;
    else
        return (res * res)%MOD;
}














/*
    freopen("problemname.in", "r", stdin);
    freopen("problemname.out", "w", stdout);
*/


vi tree[200005];
ll ancestor[200005][20];
ll depth[200005];

void node_depth(ll node,ll parent,ll lvl)
{
    depth[node] = lvl;
    for(auto child:tree[node])
    {
        if(child!=parent)node_depth(child,node,lvl+1);
    }
}

void dfs(int node,int par)
{
    ancestor[node][0] = par;
    for(ll i = 1;i<20;i++)
    {
        if(ancestor[node][i-1]!=-1){
        ancestor[node][i] = ancestor[ancestor[node][i-1]][i-1];
        }
        else ancestor[node][i] = -1;
    }
    for(auto child:tree[node])
    {
        if(child!=par)
        {
            dfs(child,node);
        }
    }
}
//binary lifting
ll kth_ancestor(ll node,ll k)
{
    if(node==-1 || k==0)return node;
    for(ll i = 19;i>=0;i--)
    {
        if(k>=(1LL<<i))
        {
            return kth_ancestor(ancestor[node][i],k-(1LL<<i));
        }
    }
    return node;
}

ll lca(ll u,ll v)
{
    if(depth[u]<depth[v])swap(u,v);
    u = kth_ancestor(u,depth[u]-depth[v]);
    if(u==v)return u;
    for(ll i = 19;i>=0;i--)
    {
        if(ancestor[u][i]!=ancestor[v][i])
        {
            u = ancestor[u][i];
            v = ancestor[v][i];
        }
    }
    return kth_ancestor(u,1);
}


int main()
{
    IOS;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    //cin>>t;
    t = 1;
    while(t--)
    {
        ll n,q;cin>>n>>q;
        for(ll i = 2;i<=n;i++)
        {
            ll x;cin>>x;
            tree[x].pb(i);
        }
        dfs(1,-1);
        node_depth(1,-1,0);
        while(q--)
        {
            ll node,k;cin>>node>>k;
            cout<<kth_ancestor(node,k)<<endl;
            ll u,v;cin>>u>>v;
            cout<<lca(u,v)<<endl;
        }

    }
}
