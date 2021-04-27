#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define loop(i,n) for(i=0;i<n;i++)
#define INF 1000000000

typedef long double ld;
typedef long long int ll;
typedef pair<ll,ll> pii;
typedef vector<pii> vii;

typedef vector<ll> vi;
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

bool sortsec(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    if(a.second<b.second)return a.first>b.first;
    else return (a.second>b.second);
}

const ll infinity = 1e18;

#define eb emplace_back
#define mp make_pair
#define pb push_back
#define MAX 100005
#define MAX2 1e17
#define MOD 1000000007
#define endl '\n'
ll dx[4]={-1,1,0,0};
ll dy[4]={0,0,1,-1};
#define ROW 9
#define COL 9
   
int main()
{
//      freopen("input.txt","r",stdin);  
//    freopen("output.txt","w",stdout); 
       IOS;
       ll n,q;cin>>n>>q;
       ll prefix[n+1];
       prefix[0] = 0;
       for(ll i=1;i<=n;i++)
       {
           ll x;cin>>x;
           prefix[i] = prefix[i-1]+x;
       }
      while(q--)
      {
          ll l,r;cin>>l>>r;
cout<<(prefix[r]-prefix[l-1])<<endl;
      }
    return 0;
}
 
