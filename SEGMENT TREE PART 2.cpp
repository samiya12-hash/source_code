#include<bits/stdc++.h>

#define MX 10001
using namespace std;
int ar[MX];
int tree[MX*4];

void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node] = ar[b];
        return ;
    }
    int left = 2*node;
     int right = 2*node+1;
    int mid = (b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node] = tree[left]+tree[right];
}

int query(int node,int b,int e,int i,int j)
{
    if(b>j || e<i)return 0;//it can be changed in different problem..
    if(b>=i && e<=j)return tree[node];
    int mid = (b+e)/2;
    int left = 2*node;
    int right = 2*node+1;
    int p1 = query(left,b,mid,i,j);
    int p2 = query(right,mid+1,e,i,j);
    return p1+p2;
}

void update(int node,int b,int e,int in,int value)
{
    if (in > e || in < b)
        return; //বাইরে চলে গিয়েছে
    if (b >= in && e <= in) { //রিলেভেন্ট সেগমেন্ট
        tree[node] = value;
        return;
    }
    int mid = (b+e)/2;//(l+(r-l)/2
    int left = 2*node;
    int right = 2*node+1;
    update(left,b,mid,in,value);
    update(right,mid+1,e,in,value);
    tree[node] = tree[left]+tree[right];
}
int main()
{
   //freopen("inputfile.txt","r",stdin);
    int n;cin>>n;
    for(int i=1;i<=n;i++)cin>>ar[i];
    init(1,1,n);
   //for(int i=0;i<n*3;i++)cout<<tree[i]<<endl;

   //update(1,1,n,6,5);
   int b,e;cin>>b>>e;
   cout<<query(1,1,n,b,e)<<endl;
}
