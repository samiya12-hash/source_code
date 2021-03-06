//tree creation...
#include<bits/stdc++.h>

#define MX 10001
using namespace std;
int ar[MX];
int tree[MX*4];//for safety

void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node] = tree[b];
        return ;
    }
    int left = 2*node;
     int right = 2*node+1;
    int mid = (b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node] = tree[left]+tree[right];
}

int main()
{
    //freopen("inputfile.txt","r",stdin);
    int n;cin>>n;
    for(int i=1;i<=n;i++)cin>>ar[i];
    init(1,1,n);

}
