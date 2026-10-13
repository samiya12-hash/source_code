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
#define MAX 1000000000000000000LL
#define MOD 1000000007
#define endl '\n'


vector<ll>v;
vector<ll> merge(vector<ll>&left,vector<ll>&right)
{
    vector<ll>ans;
    ll i = 0,j = 0;
    while(i<left.size() && j<right.size())
    {
        if(left[i]<right[j])ans.pb(left[i++]);
        else ans.pb(right[j++]);
    }
    while(i<left.size())ans.pb(left[i++]);
    while(j<right.size())ans.pb(right[j++]);
    return ans;
}
vector<ll>merge_sort(ll l,ll r)
{
    if(l==r)return {v[l]};
    ll mid = l+ ((r-l)/2);
    vector<ll>left = merge_sort(l,mid);
    vector<ll>right = merge_sort(mid+1,r);
    return merge(left,right);
}
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
    ll n;cin>>n;
    
    for(ll i = 0;i<n;i++)
    {
        ll x;cin>>x;
        v.pb(x);
    }
    vector<ll> ans = merge_sort(0,n-1);
    for(auto x:ans)cout<<x<<" ";
        cout<<endl;
   }
}       
