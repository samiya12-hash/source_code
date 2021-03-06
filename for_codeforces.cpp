#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define loop(i,n) for(i=0;i<n;i++)
#define INF 1000000000


typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<pii> vii;

typedef vector<int> vi;
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
#define MAX 100000
#define MOD 1000000007
#define endl '\n'
long dx[4]={-2,-2,1,-1};
long dy[4]={1,-1,-2,-2};

bool valid(ll n)
{
	set<ll> s;
	while(n!=0)
	{
		s.insert((n%10));
		n/=10;
	}
	if(s.size()==4)return true;
	else return false;
}

int main()
{
  ll n;cin>>n;
  vi v(n);
  for(auto &x:v)cin>>x;
  auto it = lower_bound(v.begin(),v.end(),5);
  cout<<(*it)<<endl;
return 0;
}
