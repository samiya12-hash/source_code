#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
 
 
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

 
using ll = long long int;
typedef pair<ll, ll> pii;
typedef vector<pii> vii;
 
typedef vector<ll> vi;
 
 

 


#define pb push_back
#define MAX 1000000000000000000LL
#define MOD 1000000007
#define endl '\n'



vector<ll>v;
vector<ll>b;

int main()
{ 
  //problem : Dynamic Range Sum Queries : https://cses.fi/problemset/task/1648
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
    v.resize(n);
    ll len = ll(sqrt(n+.0))+1;
    b.resize(len);
    // cout<<len<<endl;
    for(ll i = 0;i<n;i++)
    {
        cin>>v[i];
        b[i/len]+=v[i];
    }
    while(q--)
    {
        ll type;
        cin>>type;
        if(type==1)
        {
            ll idx,val;cin>>idx>>val;
            idx--;
            b[idx/len]-=v[idx];
            v[idx] = val;
            b[idx/len]+=v[idx];
        }
        else 
        {
            ll l,r;cin>>l>>r;
            l--,r--;
            ll ans = 0;
            for(ll i = l;i<=r;)
            {
                if(!(i%len) && ((i+len-1)<=r))
                {
                    ans+=b[i/len];
                    i+=len;
                }
                else 
                {
                    ans+=v[i];
                    i++;
                }
            }
            cout<<ans<<endl;
        }
    }
   }
}       
