///binary Exponentiation/...
#include<bits/stdc++.h>
using namespace std;
//for under standing we guess that our n=3 , p=84,m=17;
int f(int n,int p,int m)
{
    if(p==0)return 1;//p to the power 0 is 1 so we need't to check it;
    if(p%2!=0)
    {
        int ret1 = n%m;
        int  ret2 = f(n,(p-1),m);
        return ((ret1%m)*(ret2%m))%m;
    }
    else{
      int ret1 = f(n,p/2,m);
      return ((ret1%m)*(ret1%m))%m;
    }
}
int main()
{
    int n,p,m;
    cin>>n>>p>>m;
    int ans = f(n,p,m);
    cout<<ans<<endl;
    return 0;
}
