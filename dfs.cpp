#include<bits/stdc++.h>
using namespace std;
bool visited[100000];
vector <int> vec[100000];
void dfs(int s)
{
    //cout<<"yes"<<endl;
    if(visited[s])return;
    visited[s] = true;
    for(auto x : vec[s]) dfs(x);
}
int main()
{
    // freopen("inputfile.txt","r",stdin);
    int edges,node;
    //cout<<"enter the nodes & edges: ";
    cin>>node>>edges;
    for(int i=0;i<edges;i++)
    {
        int n1,n2;
        cin>>n1>>n2;
        vec[n1].push_back(n2);
        vec[n2].push_back(n1);
    }
    dfs(1);
    //printing the list of connected component..
    for(int i=1;i<=node;i++)
    {
       cout<<i<<"-> ";
       for(auto x: vec[i])cout<<x<<" ";
       cout<<endl;
    }
    cout<<endl<<endl;
    for(int i=1;i<=node;i++)cout<<visited[i]<<endl;
}
