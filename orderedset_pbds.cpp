#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;


typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> pbds;//find_by_order ,order_of_key 
/*
less-> elements are arranged in ascending order
greater -> elements are arranged in decending order
less_equal -> act like multiset
*/
 
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define loop(i, n) for (i = 0; i < n; i++)
#define INF 1000000000

using ll = long long int;
typedef pair<ll, ll> pii;
typedef vector<pii> vii;

#define eb emplace_back
#define mp make_pair
#define pb push_back
#define MAX 100000000000000000LL
#define MOD 1000000007
#define endl '\n'

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
    pbds a;//inserting element
    a.insert(4);
    a.insert(12);
    a.insert(16);
    a.insert(32);

    for(auto x:a)cout<<x<<endl;

    //find the kth element
    cout<<"0th element: "<<*a.find_by_order(0)<<endl;//4
    cout<<"1st element: "<<*a.find_by_order(1)<<endl;//12
    cout<<"2nd element: "<<*a.find_by_order(2)<<endl;//16
    //finding the number of elements smaller than x
    cout<<"no. of elements smaller than 6: "<<a.order_of_key(6)<<endl;
    cout<<"no. of elements smaller than 15: "<<a.order_of_key(15)<<endl;

    //upper_bound
    cout<<"upper bound of 6: "<<*a.upper_bound(6)<<endl;
    cout<<"upper bound of 15: "<<*a.upper_bound(15)<<endl;
    //lower_bound
    cout<<"lower bound of 6: "<<*a.lower_bound(6)<<endl;
    //remove element
    a.erase(4);
    a.erase(11);
    for(auto x:a)cout<<x<<" ";
        cout<<endl;
   }

}
