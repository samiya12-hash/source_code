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
#define MAX 100000LL
#define MOD 1000000007
#define endl '\n'


vector<vector<ll>>connect(MAX);
vector<ll>visited(MAX);
vector<ll>in(MAX),low(MAX);
ll timer;
set<ll> articulation_point;
void dfs(ll node,ll parent)
{
    visited[node] = 1;
    in[node] = low[node] = timer;
    timer++;
    ll c = 0;
    for(auto child:connect[node])
    {
        if(child==parent)continue;
        else if(visited[child])low[node] = min(low[node],in[child]);
        else 
        {
            dfs(child,node);
            c++;
            low[node] = min(low[node],low[child]);
            if((low[child]>=in[node]) && parent!=0)articulation_point.insert(node);

        }
    }
    if(parent==0 && c>1LL)articulation_point.insert(node);
}

int main()
{
    IOS;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    while(1){
    ll n;cin>>n;
    ll m;cin>>m;
    if(n==0 && m==0)break;
    for(ll i = 1;i<=n;i++)
    {
        connect[i].clear();
        visited[i] = 0;
    }
    articulation_point.clear();
    timer = 1;
    
    while(m--)
    {
        ll a,b;cin>>a>>b;
        connect[a].pb(b);
        connect[b].pb(a);
    }
    for(ll i = 1;i<=n;i++){
    if(!visited[i])dfs(i,0);
    }
    cout<<articulation_point.size()<<endl;
    //for(auto x:articulation_point)cout<<x<<endl;
}
}
