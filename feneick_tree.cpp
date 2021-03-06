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

typedef vector<ll> vi;
typedef tree<int,null_type,less<int>,rb_tree_tag,
        tree_order_statistics_node_update> indexed_set;

bool sortsec(const pair<int,int> &a,const pair<int,int> &b)
{
    if(a.second==b.second)return a.first>b.first;
    else return (a.second>b.second);
}



#define eb emplace_back
#define mp make_pair
#define pb push_back
#define MAX 100001
#define MOD 1000000
#define endl '\n'



/**
 love extends code
**/
ll ar[10000];
ll tre[10000];

ll query(ll idx)
{
    ll sum = 0;
    while(idx>0)
    {
        sum += tre[idx];
        idx -= (idx & -(idx));
    }
    return sum;
}
void update(ll idx,ll val,ll n)
{
    while(idx<=n)
    {
       // cout<<idx<<endl;
        tre[idx]+=val;
        idx += (idx & -(idx));
    }
}



int main()
{
    ll n;cin>>n;
   // update(5,3,n);
   for(ll i=1;i<=n;i++)
   {
       cin>>ar[i];
        update(i,ar[i],n);
    }
    for(ll i=1;i<=n;i++)cout<<tre[i]<<endl;
    //cout<<query(6)<<endl;
}
