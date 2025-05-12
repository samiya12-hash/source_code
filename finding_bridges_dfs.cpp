#include <bits/stdc++.h>
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;

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

#define eb emplace_back
#define mp make_pair
#define pb push_back
#define MAX ll(1000000)
#define MOD 1000000007
#define endl '\n'



/*
    freopen("problemname.in", "r", stdin);
    freopen("problemname.out", "w", stdout);
*/


vector<vector<ll>>connect(MAX);
vector<ll>in(MAX),low(MAX),visited(MAX);
ll timer;
void dfs(ll node,ll parent)
{
    visited[node] = 1;
    low[node] = in[node] = timer;
    timer++;
    for(auto child:connect[node])
    {
        if(child==parent)continue;
        else if(visited[child])low[node] = min(in[child],low[node]);
        else 
        {
            dfs(child,node);
            if(low[child]>in[node])cout<<node<<" "<<child<<" is a bridge"<<endl;
            low[node] = min(low[node],low[child]);
        }
    }
}

int main()
{
    IOS;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll n,m;cin>>n>>m;
    while(m--)
    {
        ll a,b;cin>>a>>b;
        connect[a].pb(b);
        connect[b].pb(a);
    }
    dfs(1,0);
}
