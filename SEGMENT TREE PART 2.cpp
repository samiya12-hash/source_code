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


bool sortsec(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.second == b.second)
        return a.first > b.first;
    else
        return (a.second > b.second);
}

#define eb emplace_back
#define mp make_pair
#define pb push_back
#define MAX 100000000000000000LL
#define MOD 1000000007
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


ll ar[100000LL];
ll seg[400000LL];
void build(ll idx,ll low,ll high)
{
    if(low==high)
    {
        seg[idx]=ar[low];
        return ;
    }
    ll mid = (high+low)/2LL;
    build((2*idx)+1,low,mid);
    build((2*idx)+2,mid+1,high);
    seg[idx] = seg[(idx*2)+1]+seg[(idx*2)+2];
}

ll query(ll idx,ll low,ll high,ll l,ll r)
{
    if(l<=low && r>=high)return seg[idx];
    else if(high<l || r<low)return 0;
    else
    {
        ll mid = (low+high)/2;
        ll left = query((2*idx)+1,low,mid,l,r);
        ll right = query((2*idx)+2,mid+1,high,l,r);
        return left+right;
    }
}
void pointupdate(ll idx,ll low,ll high,ll node,ll val)
{
    if(low==high)
        {
            seg[idx] = val;
            return;
        }
    ll mid = (low+high)/2;
    if(node<=mid)pointupdate((2*idx)+1,low,mid,node,val);
    else pointupdate((2*idx)+2,mid+1,high,node,val);
    seg[idx] = seg[(2*idx)+1]+seg[(2*idx)+2];
}

int main()
{ IOS;
    
   //  ll t;
   // t = 1;
   // //cin>>t;
   // while(t--)
   // {

   // }
    ll n;cin>>n;
    for(ll i = 0;i<n;i++)
    {
        ll x;cin>>x;
        ar[i] = x;
    }
    build(0,0,n-1);
    cout<<query(0,0,n-1,1,3)<<endl;
    pointupdate(0,0,n-1,2,4);
    cout<<query(0,0,n-1,1,3)<<endl;

}
