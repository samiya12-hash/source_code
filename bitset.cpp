#include<bits/stdc++.h>
using namespace std;
int main()
{
    bitset <4> bi(string("1010"));//bi(6);
   // bi.set();
   bitset <4> b(string("1010"));
   cout<<bi<<endl;
    cout<<bi.count()<<endl;
    cout<<bi.size()-bi.count()<<endl;
    if(bi.any())//(any) dile ekta true(1) thakle  true// ar none thakle true(1) thakle false.
    cout<<"true"<<endl;
    else cout<<"false"<<endl;
    bi.set(1);
    cout<<bi<<endl;//010
    bi.flip();//101
    cout<<bi<<endl;
    cout<<(bi == b)<<endl;
}
