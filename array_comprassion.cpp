///it also works as hash function....
#include<bits/stdc++.h>
using namespace std;
map<int,int>ma;
void compress()
{
    int ar[]= {24,4324,235,4324,564,564,656,54565,24,24};

    int assign=0,compressd[100],c=0,n=sizeof(ar)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        int x = ar[i];
        if(ma.find(x)==ma.end())
        {
            ma[x] = assign;
            assign++;
            cout<<ma[x]<<endl;
        }
        x = ma[x];
        compressd[c++]=x;
    }
    for(int i=0;i<n;i++)cout<<compressd[i]<<' ';
    cout<<endl;
}
int main()
{
    compress();
    return 0;
}
