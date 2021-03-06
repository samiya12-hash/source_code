#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define loop(i,n)for(i=0;i<n;i++)
#define INF 1000000000


using ll = long long int;
typedef pair<ll,ll> pii;
typedef vector<pii> vii;
typedef long double ld;
typedef vector<ll> vi;
typedef tree<int,null_type,less<int>,rb_tree_tag,
        tree_order_statistics_node_update> indexed_set;

bool sortsec(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    if(a.second==b.second)return a.first>b.first;
    else return (a.second>b.second);
}



#define eb emplace_back
#define mp make_pair
#define pb push_back
#define MAX 100000
#define MOD 1000000
#define endl '\n'


bool comp(const pair<int,int> &a,const pair<int,int> &b)
{
    if(a.second<b.second)return true;
    return false;
}
vi v[MAX];
bool visited[MAX];
vi color(MAX);
bool dfs(ll node,ll col)
{
    visited[node] = 1;
    color[node] = col;
    for(auto child:v[node])
    {
        if(!visited[child])
        {
            if(!dfs(child,col^1))return false;
        }
        else if(color[child]==color[node])return false;
    }
    return true;
}
int main()
{
    //freopen("inputfile.txt","r",stdin);
    ll nodes,edges;cin>>nodes>>edges;
    for(ll i=0;i<edges;i++)
    {
        ll x,y;cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    for(ll i=1;i<=nodes;i++)
    {
        for(auto x:v[i])cout<<x<<" ";
        cout<<endl;
    }
    if(dfs(1,1))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
