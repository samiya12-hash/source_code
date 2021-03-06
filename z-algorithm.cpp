#include<bits/stdc++.h>
using namespace std;
vector <int> z(100000);
void z_function(string s)
{
    int len = s.length(),l,r;
    for(int i=1,l=0,r=0;i<len;i++)
    {
        if(i<=r) z[i] = min(r-i+1,z[i-l]);//whether this lies in the segment
        while((i+z[i])<len && s[z[i]]==s[i+z[i]])z[i]++;
        if((i+z[i]-1)>r)l=i,r=(i+z[i]-1);//range update
    }
}
int main()
{
    //freopen("inputfile.txt","r",stdin);
    string s;cin>>s;
    z_function(s);
    for(int i=0;i<s.size();i++)cout<<z[i]<<" ";
    cout<<endl;
}
