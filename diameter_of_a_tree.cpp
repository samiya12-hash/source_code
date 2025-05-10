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

#define mp make_pair
#define pb push_back
#define MAX ll(1000000)
#define MOD 1000000007
#define endl '\n'



vector<vector<ll>>connect(MAX);
ll visited[MAX];
ll diameter;
ll nodex;
void dfs(ll node,ll dis)
{
    visited[node] = 1;
    if(dis>diameter)
    {
        diameter = dis;
        nodex = node;
    }
    //cout<<node<<" "<<dis<<endl;
    for(auto x:connect[node])
    {
        if(!visited[x])dfs(x,dis+1);
    }
    
}
int main()
{
  //2 DFS : (1,farthest node) (farthest node to another node)-> largest distance between any 2 nodes in the tree
    IOS;
    ll n;cin>>n;
    for(ll i = 0;i<n-1;i++)
    {
        ll a,b;cin>>a>>b;
        connect[a].pb(b);
        connect[b].pb(a);
    }
    diameter = 0;
    dfs(1,0);
    for(ll i = 1;i<=n;i++)visited[i] = 0;
    // cout<<diameter<<endl;
    dfs(nodex,0);
    cout<<diameter<<endl;
}
