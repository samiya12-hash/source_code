///SHORTEST PATH PROBLEM::::VALID FOR UNDIRECTED GRAPH..
#include<bits/stdc++.h>
using namespace std;
vector <int> lis[1000];
using ii = int;
int main()
{
    freopen("inputfile.txt","r",stdin);
    ii nodes,edges;//cout<<"enter the nodes and edges:";
    bool visited[1000];
    int distance[1000];
    queue <int> q;
    cin>>nodes>>edges;
    for(ii i=1;i<=edges;i++)
    {
        ii n1,n2;cin>>n1>>n2;
        lis[n1].push_back(n2);//parallel vector creating
    }
    for(int i=1;i<=nodes;i++)distance[i] = INT_MAX;
    //bfs start.//i am starting it with 1
    visited[1] = true;
    distance[1] = 0;
    q.push(1);
    while(!q.empty())
    {
        ii s = q.front();
        q.pop();
        for(auto x : lis[s])
        {
            if(visited[x]==true)continue;
            visited[x] = true;
            distance[x] = distance[s]+1;
            q.push(x);
        }
    }
    for(int i=1;i<=nodes;i++)cout<<distance[i]<<endl;
}
