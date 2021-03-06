#include<bits/stdc++.h>
using namespace std;
using ii = int;
typedef push_back pb;
#define loop(i,n)for(i=1;i<=n;i++)
vector <pair<int,int> >lis[100000];
vector <int>  outdegree[100000];
vector <int> indegree[100000];
int main()
{
    ii i,j,nodes,edges;
    cout<<"enter the nodes & edges: ";cin>>nodes>>edges;
   loop(i,edges)
    {
        ii n1,n2,cost;cin>>n1>>n2>>cost;
        lis[n1].pb(make_pair(n2,cost));///if directed than the second lone is unnecessary/
        //lis[n2].push_back(make_pair(n1,cost));
        indegree[n2].push_back(n1);
        outdegree[n1].push_back(n2);
    }
    cout<<"printing neighbors: "<<endl;
    loop(i,nodes)
    {
        for(auto x : lis[i])cout<<x.first<<"(cost = "<<x.second<<")"<<' ';
        cout<<"outdegree"<<endl;
        for(auto x : outdegree[i])cout<<x<<' ';
        cout<<"indegree"<<endl;
        if(indegree[i].empty())cout<<"empty"<<endl;
        else for(auto x : indegree[i])cout<<x<<' ';
        cout<<endl;
    }
    return 0;
}
