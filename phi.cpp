#include<bits/stdc++.h>
using namespace std;
int phi(int);
bool prime(int);
int f(int,int,int);//if you want to see the modular inverse..
int main()//phi func.
{
    int n;
    cin>>n;
    cout<<phi(n)<<endl;
}
/*int main()//for modular inverse..
{
    int n,m;
    cin>>n>>m;
    int ph = phi(m);
    int ans = f(n,ph-1,m);
    cout<<ans<<endl;
}*/

int phi(int n)
{
    if(prime(n))return n-1;
    else {
    int c=0,ans=1,flag=0;
    while(n%2==0)
    {
        flag = 1;
        c++;
        n = n/2;
    }
    if(flag==1)ans = ans*pow(2,c-1);
    for(int i=3;i<=sqrt(n);i=i+2)
    {
        c=0,flag=0;
        while(n%i==0)
        {
            flag = 1;
            c++;
            n = n/i;
        }
        if(flag==1)ans = ans*(pow(i,c-1)*(i-1));
    }
    if(n>2)ans = ans*(pow(n,0)*(n-1));
    return ans;
    }
}

bool prime(int n)
{
    int flag=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)return false;
    else return true;
}
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
