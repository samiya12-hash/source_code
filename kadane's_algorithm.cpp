#include <bits/stdc++.h>
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;

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
#define MAX 10000
#define MOD 1000000007
#define endl '\n'

int main()
{
    IOS;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
//     At each step, we choose:

// either to continue the current subarray (by adding the current element),

// or start a new subarray from the current element if it gives a better result.
  // can be used for findging minimum subarray sum
    ll n;cin>>n;
    vi v(n);
    for(auto &x:v)cin>>x;
    ll maxi_ending_here = v[0];
    ll ans = maxi_ending_here;
    for(ll i = 1;i<n;i++)
    {

        ll cur = maxi_ending_here+v[i];
        maxi_ending_here = max(cur,v[i]);
        ans = max(ans,maxi_ending_here);

    }
    cout<<ans<<endl;
}
