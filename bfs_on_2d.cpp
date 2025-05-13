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
#define MAX 10000LL
#define MOD 1000000007
#define endl '\n'
ll dx[4] = {-1, 1, 0, 0};
ll dy[4] = {0, 0, 1, -1};




ll visited[MAX][MAX];
ll dis[MAX][MAX];
bool is_valid(ll x,ll y,ll n,ll m)
{
    if ((x < 1) || (x > n) || (y < 1) || (y > m))
        return false;
    if (visited[x][y])
        return false;
    return true;
}

int main()
{
    IOS;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll n,m;cin>>n>>m;
    queue<pair<ll,ll>>q;
    q.push({1,1});
    dis[1][1] = 0;
    visited[1][1] = 1;
    while(!q.empty())
    {
        ll x = q.front().first;
        ll y = q.front().second;
        q.pop();
        for(ll i = 0;i<4;i++)
        {
            if(is_valid(x+dx[i],y+dy[i],n,m))
            {
                q.push({x+dx[i],y+dy[i]});
                dis[x+dx[i]][y+dy[i]] = dis[x][y]+1;
                visited[x+dx[i]][y+dy[i]] = 1;
            }
        }
    }
    for(ll i = 1;i<=n;i++)
    {
        for(ll j = 1;j<=m;j++)cout<<dis[i][j]<<" ";
        cout<<endl;
    }
   
}
