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





ll ar[100000LL];
ll seg[400000LL];
ll lazy[400000LL];

void build(ll idx,ll low,ll high)
{
    if(low==high)
    {
        seg[idx] = ar[low];
        return;
    }
    ll mid = (low+high)/2LL;
    build((2*idx)+1,low,mid);
    build((2*idx)+2,mid+1,high);
    seg[idx] = seg[(2*idx)+1]+seg[(2*idx)+2];
}

ll query(ll idx,ll low,ll high,ll l,ll r)
{
    if(lazy[idx])
    {
        ll responsible = (high-low)+1;
        seg[idx]+=(responsible*lazy[idx]);
        if(low!=high)
        {
            lazy[(2*idx)+1]+=lazy[idx];
            lazy[(2*idx)+2]+=lazy[idx];
        }
        lazy[idx] = 0;
    }
    if(l>high || r<low)return 0;
    else if(l<=low && high<=r)return seg[idx];
    else {
        ll mid = (low+high)/2;
        ll left = query((2*idx)+1,low,mid,l,r);
        ll right = query((2*idx)+2,mid+1,high,l,r);
        return left+right;
    }
}


void update(ll idx,ll low,ll high,ll l,ll r,ll val)
{
    if(lazy[idx])
    {
        ll responsible = high-low+1;
        seg[idx]+=(responsible*lazy[idx]);
        if(low!=high)
        {
            lazy[(2*idx)+1]+=lazy[idx];
            lazy[(2*idx)+2]+=lazy[idx];
        }
        lazy[idx] = 0;
    }
    if(r<low || l>high)return;
    else if(low>=l && high<=r)
    {
        seg[idx]+=(((high-low)+1)*val);
        if(low!=high)
        {
            lazy[(2*idx)+1]+=val;
            lazy[(2*idx)+2]+=val;
        }
        return;
    }
    else {
        ll mid = (low+high)/2;
        update((2*idx)+1,low,mid,l,r,val);
        update((2*idx)+2,mid+1,high,l,r,val);
        seg[idx] = seg[(2*idx)+1]+seg[(2*idx)+2];
        return ;
    }


}




/*
    freopen("problemname.in", "r", stdin);
    freopen("problemname.out", "w", stdout);
*/


int main()
{ IOS;
    // freopen("input1.txt", "r", stdin);
    // freopen("output2.txt", "w", stdout);
    ll t;
   t = 1;
   //cin>>t;
   while(t--)
   {
    ll n;cin>>n;
    for(ll i = 0;i<n;i++)
    {
        ll x;cin>>x;
        ar[i] = x;
    }
    //can do point update and range update //for point update l==r 
    build(0,0,n-1);
    cout<<query(0,0,n-1,1,3)<<endl;
    update(0,0,n-1,1,1,5);
    cout<<query(0,0,n-1,1,3)<<endl;



   }

} 
