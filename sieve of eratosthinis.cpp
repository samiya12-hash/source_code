#include<bits/stdc++.h>
using namespace std;

bitset<1005>bi;
vector <int> vec;
void sieve(int n)
{
    int limit = sqrt(n * 1.0) + 2;
    bi.set();
    bi[0]=bi[1]=0;
    vec.push_back(2);
    for(int i=3;i<=n;i+=2)
    {
        if(bi[i])
        {
            vec.push_back(i);
            if(i<=limit){
            for(int j=i*i;j<=n;j+=i*2)bi[j]=0;
            }
        }
    }
}
int main()
{
    sieve(1000);
    for(auto x: vec)cout<<x<<endl;
}
