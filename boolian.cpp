#include<bits/stdc++.h>
using namespace std;
bool sub(string ch,string s)
{
    int n = ch.size();
    int l = s.size();
    for(int i=0;i<n;i++)
    {
        int j = 0;
        for(j=0;j<l && i+j<n;j++)
        {
            if(ch[i+j]!= s[j])break;
        }
        if(j==l)return true;
    }
    return false;
}
int main()
{
    string ch;
    cin>>ch;
    //int n = ch.size();
    string s;
    cin>>s;
    //int l = s.size();
    //cout<<ch<<endl<<"the length is : "<<n<<endl;
    //int k = sub(ch,n,s,l);
    cout<<sub(ch,s)<<endl;
    //if(k==0)cout<<"yes"<<endl;
    //else cout<<"no"<<endl;
    return 0;
}
