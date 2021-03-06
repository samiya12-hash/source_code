#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll binpow(ll a, ll b) {
a %= 1000000007;
ll res = 1;
while (b > 0) {
if (b & 1)
res = res * a % 1000000007;
a = a * a % 1000000007;
b >>= 1;
}
return res;
}
int main()
{
    //freopen("inputfile.txt","r",stdin);
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    ll n,p;
    cin>>n>>p;
    ll ans = 0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0 && i!= n/i)
        {
            ans = ans+binpow(i,p);
            ans = ans+binpow(n/i,p);
        }
        else if(n%i==0 && i==n/i)ans = ans+binpow(i,p);
    }
    cout<<ans<<endl;
    }
    return 0;
}
