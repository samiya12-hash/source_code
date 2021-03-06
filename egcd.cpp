///extended euclidean algo and modular inverse
#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
#define x first
#define y second

pii egcd(int a, int b) {
  if(b == 0) return pii(1, 0);
  else {
    pii d = egcd(b,a % b);
    return pii(d.y, d.x - d.y * (a / b));
  }
}

int modular_inverse(int a,int m)
{
    pii ec = egcd(a,m);
    return (((ec.x%m)+m)%m);
}

int main()
{
    int a,m;cin>>a>>m;
    pii ans = egcd(a,m);
    cout<<ans.x<<" "<<ans.y<<endl;
    ///if you want modular inverse..
    ///then put this.
    cout<<modular_inverse(a,m)<<endl;
    return 0;

}
