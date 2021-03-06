///undirected/bidirectional.& directed.......weighted......
#include<bits/stdc++.h>
#define loop(k,n) for(k=1;k<=n;k++)
using namespace std;
using ii = int;
int ar[1000][1000];
int main()
{
    ii nodes,edges,j,i;
    cout<<"enter the nodes & edges: ";cin>>nodes>>edges;
    loop(i,edges)
    {
        ii n1,n2,cost;
        cin>>n1>>n2>>cost;
        ar[n1][n2] = cost;///jodi directed hoi taile shudhu ei line ta hobe
        ar[n2][n1] = cost;///opposite line ta hobe na............
    }
    loop(i,nodes)
    {
        loop(j,nodes)
        {
            cout<<ar[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
