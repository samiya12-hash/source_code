///a^b can be calculated through binary exponentiation....
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll binpow(ll a,ll b)
{
    if(b==0)return 1;
    ll ans = binpow(a,b/2);
    if(b%2)return ans*ans*a;
    else return ans*ans;
}
int main()
{
    ll a,b;cin>>a>>b;
    cout<<binpow(a,b);
}
