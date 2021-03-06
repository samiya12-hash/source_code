///vertex niye oi graph print....
/*#include<bits/stdc++.h>
using namespace std;
int adj[100][100];
int  main()
{
    freopen("inputfile.txt","r",stdin);
    freopen("outputfile.txt","w",stdout);
    int vertex,edge;
    cin>>vertex>>edge;
    int v1,v2;
    for(int i=0;i<edge;i++)
    {
        cin>>v1>>v2;
        adj[v1][v2] = 1;
        adj[v2][v1] = 1;
    }
    for(int j=0;j<vertex;j++)
    {
        for(int h=0;h<vertex;h++)cout<<' '<<adj[j][h];
        cout<<endl;
        }
///input.......
5
6
0 1
2 0
2 1
1 3
1 4
3 4
}
*/
///neighbour node/vertex.............................................
#include<bits/stdc++.h>
using namespace std;
int adj[100][100];
int  main()
{
    freopen("inputfile.txt","r",stdin);
    int vertex,edge;
    cin>>vertex>>edge;
    int v1,v2;
    for(int i=0;i<edge;i++)
    {
        cin>>v1>>v2;
        adj[v1][v2] = 1;
        adj[v2][v1] = 1;
    }
    int c;
    cin>>c;
    for(int k=0;k<vertex;k++)
    {
        if(adj[c][k]==1)cout<<k<<' ';
    }
    cout<<endl;
}
