
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define loop(i,n)for(i=0;i<n;i++)
#define INF 10000000000

using ll = long long int;
typedef pair<ll,ll> pii;
typedef vector<pii> vii;
typedef long double ld;
typedef vector<ll> vi;
typedef tree<int,null_type,less<int>,rb_tree_tag,
        tree_order_statistics_node_update> indexed_set;

bool sortsec(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    if(a.second<b.second)return a.first>b.first;
    else return (a.second>b.second);
}



#define eb emplace_back
#define mp make_pair
#define pb push_back
#define MAX 1000
#define MAX2 1000000005
#define MOD 1000000007
#define endl '\n'

ll ar[MAX+5][MAX+5];

int main()
{
   //freopen("inputfile.txt","r",stdin);
   ll n;cin>>n;

   ll top = 1,down = (n*2)-1;
   ll left = 1,right = (n*2)-1;
   ll i = 0;/// iterator
   ll direction =  0;
   /** direction -> 0 -- -> left  - right
       direction --> 1 >>> top - down
       direction ---> 2 >>> right - left
       direction ---> 3 >>> down - top
   **/
   ll cur_num = n;
   while(top<=down && left<=right)
   {
       if(direction==0)
       {
           for(ll i=left;i<=right;i++)ar[top][i] = cur_num;
           top++;
           direction = 1;
       }
       else if(direction==1)
       {
           for(ll i=top;i<=down;i++)ar[i][right] = cur_num;
           right--;
           direction = 2;
       }
       else if(direction == 2)
       {
           for(ll i=left;i<=right;i++)ar[down][i] = cur_num;
           down--;
           direction = 3;
       }

       else if(direction==3)
       {
           for(ll i=top;i<=down;i++)ar[i][left] = cur_num;
           left++;
           direction = 0;
           cur_num--;
       }
   }
   for(ll i=1;i<=(n*2)-1;i++)
   {
       for(ll j=1;j<=(n*2)-1;j++)printf("%lld ",ar[i][j]);
       printf("\n");
   }
    return 0;
}


