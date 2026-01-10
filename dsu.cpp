#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;


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
#define MAX 100000000000000000LL
#define MOD 1000000007
#define endl '\n'


class disjointset{
public:
    vector<ll>parent;
    vector<ll>size;
    disjointset(ll n){
        parent.resize(n+1);
        size.resize(n+1);
        for(ll i = 1;i<=n;i++)
            {
                parent[i] = i;
                size[i] = 1;
            }
    }
    ll find(ll node)
    {
        if(parent[node]==node)return node;
        else return parent[node] = find(parent[node]);
    }
    void union_sets(ll a,ll b)
    {
        ll par_a = find(a);
        ll par_b = find(b);
        if(par_a!=par_b){
            if(size[par_a]<size[par_b])swap(par_a,par_b);
            parent[par_b] = par_a;
            size[par_a]+=size[par_b];
        }
    }
};

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
    ll n,q;cin>>n>>q;
    disjointset dsu(n);
    while(q--)
    {
        ll type,a,b;cin>>type>>a>>b;
        if(type==0)dsu.union_sets(a,b);
        else {
            ll par_a = dsu.find(a);
            ll par_b = dsu.find(b);
            if(par_a==par_b)cout<<"1"<<endl;
            else cout<<"0"<<endl;
        }
    }


   }

}
