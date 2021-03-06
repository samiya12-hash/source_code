#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
   // freopen("inputfile.txt","r",stdin);
    string s;cin>>s;
    int l = s.size();
    ll dp[l+1][l+1];

    memset(dp,0,sizeof(dp));
    for(int i=0;i<=1;i++)
    {
        for(int j=i;j<=l;j++)dp[i][j] = 1;
    }
    int ma = 0;
    for(int i=2;i<=l;i++)
    {
        int count = 0 ;
        for(int j=i;j<=l;j++)
        {
            if(s[j-1]==s[j-i] && dp[i-2][j-1]==1)dp[i][j] = 1;
            else dp[i][j] = 0;
            if(dp[i][j])count = i;
        }
        ma = max(ma,count);
    }
   cout<<ma<<endl;
    return 0;
}
