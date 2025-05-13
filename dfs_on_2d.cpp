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



#define eb emplace_back
#define mp make_pair
#define pb push_back
#define MAX 10000LL
#define MOD 1000000007
#define endl '\n'
ll dx[4] = {-1, 1, 0, 0};
ll dy[4] = {0, 0, 1, -1};


ll grid[MAX][MAX];
ll visited[MAX][MAX];

bool is_valid(ll x, ll y, ll n, ll m)
{
    if ((x < 1) || (x > n) || (y < 1) || (y > m))
        return false;
    if (visited[x][y])
        return false;
    return true;
}

void dfs(ll x, ll y, ll n, ll m)
{
    cout << x << " " << y << endl;
    visited[x][y] = 1;
    for (ll i = 0; i < 4; i++)
    {
        if (is_valid(x + dx[i], y + dy[i], n, m)) // up//down//right//left
        {
            dfs(x + dx[i], y + dy[i], n, m);
        }
    }
}

int main()
{
    IOS;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll n, m;
    cin >> n >> m;
    // 1 based
    dfs(1, 1, n, m);
}
