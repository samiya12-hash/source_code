#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
 
 
 
/*
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> pbds;//find_by_order ,order_of_key 
 
less-> elements are arranged in ascending order
greater -> elements are arranged in decending order
less_equal -> act like multiset
*/
 
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
 
typedef tree<pair<ll,ll>,null_type,less<pair<ll,ll>>,rb_tree_tag,tree_order_statistics_node_update>pbds;
 
#define eb emplace_back
#define mp make_pair
#define pb push_back
#define MAX 3000000000000000000LL
#define MOD 998244353
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

//problem:https://atcoder.jp/contests/abc400/tasks/abc400_d
int main()
{ 
       #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    ll t;
   t = 1;
   //cin>>t;
   while(t--)
   {
    ll h,w;cin>>h>>w;
    ll dis[h+1][w+1];
    vector<string>v(h+1);
    for(ll i = 1;i<=h;i++)cin>>v[i];
    ll a,b,c,d;cin>>a>>b>>c>>d;
    deque<pair<ll,ll>>dq;
    for(ll i = 1;i<=h;i++)
    {
        for(ll j = 1;j<=w;j++)dis[i][j] = MAX;
    }
    dq.push_front(mp(a,b));
    dis[a][b] = 0;
    while(!dq.empty())
    {
        ll x = dq.front().first;
        ll y = dq.front().second;
        if((x==c) && (y==d))
        {
            cout<<dis[x][y]<<endl;
            return 0;
        }
        dq.pop_front();
        for(ll i = 0;i<4;i++)
        {
            ll newx = x+dx[i];
            ll newy = y+dy[i];
            if((newx>0 && newx<=h) && (newy>0 && newy<=w) && (v[newx][newy]=='.') && (dis[newx][newy]>dis[x][y]))
            {
                dis[newx][newy] = dis[x][y];
                dq.push_front(mp(newx,newy));
            }
        }
        for(ll i = 0;i<4;i++)
        {
            for(ll j = 1;j<3;j++)
            {
            ll newx = x+dx[i]*j;
            ll newy = y+dy[i]*j;
            if((newx>0 && newx<=h) && (newy>0 && newy<=w) && (dis[newx][newy]>dis[x][y]+1))
            {
                dis[newx][newy] = dis[x][y]+1;
                dq.push_back(mp(newx,newy));
            }
            }
        }
    }
   }
}
