#include<bits/stdc++.h>
using namespace std;
void permute(string a,int l,int r)
{
    if(l==r){
    cout<<endl;
   // cout<<a<<endl;
    }
    else {
        for(int i=l;i<=r;i++)
        {
            swap(a[l],a[i]);
            cout<<"SWAPPED "<<a[l]<<" WITH "<<a[i]<<endl;
            cout<<"string ta hoche: "<<a<<endl;
            cout<<"string index "<<"l= "<<l+1<<' '<<"r = "<<r<<endl;
            permute(a,l+1,r);
            //swap(a[l],a[i]);
            //cout<<a[l]<<' '<<a[i]<<endl;
        }
    }
}
int main()
{
    string ch;
    cin>>ch;
    int n = ch.size();
    cout<<endl;
    permute(ch,0,n-1);
    return 0;
}
