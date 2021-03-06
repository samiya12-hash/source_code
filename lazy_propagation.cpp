#include<bits/stdc++.h>
using namespace std;


const int MX = 10001;
int ar[MX];

struct info
{
    int propagate,sum;
}tree[MX*4];


void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node].sum = ar[b];
        return;
    }
    int mid = (b+e)>>1;
    int left = node<<1;
    int right = (node<<1)+1;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node].sum = tree[left].sum+tree[right].sum;
}

void update(int node,int b,int e,int i,int j,int val)
{
    if(e<i || j<b)return;
    if(i<=b && e<=j)
    {
        int res = (e-b)+1;
        tree[node].sum+=  res*val;
        tree[node].propagate+=val;
        return ;
    }
    int mid = (b+e)>>1;
    int left = (node<<1);
    int right = (node<<1)+1;
    update(left,b,mid,i,j,val);
    update(right,mid+1,e,i,j,val);
    tree[node].sum = tree[left].sum+tree[right].sum+(tree[node].propagate*((e-b)+1));
}

int query(int node,int b,int e,int i,int j,int carry)
{
     if(e<i || j<b)return 0;
     if(i<=b && e<=j)
     {
         int res = e-b+1;
         return tree[node].sum+(carry*res);
     }
     int mid = (b+e)>>1;
     int left = (node<<1);
     int right = (node<<1)+1;
    int p1 = query(left,b,mid,i,j,carry+tree[node].propagate);
    int p2 = query(right,mid+1,e,i,j,carry+tree[node].propagate);
    return p1+p2;
}
int main()
{
    //freopen("inputfile.txt","r",stdin);
    int n;cin>>n;
    for(int i=1;i<=n;i++)cin>>ar[i];
    init(1,1,n);
    int i,j,val;
    cin>>i>>j>>val;
    update(1,1,n,i,j,val);
    //for(int i=1;i<n;i++)cout<<tree[i].sum<<endl;
    int k,l;cin>>k>>l;
    cout<<endl<<query(1,1,n,k,l,0);

}
