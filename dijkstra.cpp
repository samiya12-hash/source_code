#include<bits/stdc++.h>
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;

#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define loop(i,n)for(i=0;i<n;i++)
#define INF 10000000000

using ll = long long int;
typedef pair<ll,ll> pii;
typedef vector<pii> vii;
typedef long double ld;
typedef vector<ll> vi;

// typedef tree<int,null_type,less<int>,rb_tree_tag,
// tree_order_statistics_node_update> indexed_set;

bool sortsec(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    if(a.second<b.second)return a.first>b.first;
    else return (a.second>b.second);
}

const ll infinity = 1e18;

#define eb emplace_back
#define mp make_pair
#define pb push_back
#define MAX 100006
#define MAX2 1e17;
#define MOD 998244353
#define endl '\n'
ll dx[4]={-2,-2,1,-1};
ll dy[4]={1,-1,-2,-2};

vii connect[MAX];
ll shortest_path[MAX];


void djkstra(ll now,ll node)
{
   shortest_path[now] = 0;
   priority_queue <pii , vii, greater<pii> > pq;
   pq.push({0,now}) ;
   while(!pq.empty())
   {
       ll cost = pq.top().first;
       ll vertex = pq.top().second;
       pq.pop();
       if(shortest_path[vertex]<cost)continue;
       for(auto x:connect[vertex])
       {
           if(cost+(x.second) < shortest_path[x.first])
           {
               shortest_path[x.first] = (cost+x.second);
               pq.push({(cost+x.second),x.first});
           }
       }
   }
}


int main()
{

   //freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
   ll node,edge;cin>>node>>edge;
   for(ll i=0;i<=node;i++) shortest_path[i] = MAX2;
   for(ll i=0;i<edge;i++)
   {
       ll u,v,w;cin>>u>>v>>w;
       connect[u].push_back(mp(v,w));
   }
   djkstra(1,node);
   for(ll i=1;i<=node;i++)cout<<shortest_path[i]<<" ";
   cout<<endl;
        return 0;
}
