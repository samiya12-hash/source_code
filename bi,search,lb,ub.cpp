#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int>ms = {1,2,3,4,5,6};
    //auto it = lower_bound(ms.begin(),ms.end(), 6);
    //int n;
    /*bool ans  = binary_search(ms.begin(),ms.end(),4);
    if(ans)cout<<"yes"<<endl;
    else cout<<"no"<<endl;*/
    //cout<<*it<<endl;
    //cout<< distance(ms.begin(), it);
    auto it = upper_bound(ms.begin(),ms.end(),4);
    if(it!=ms.end())cout<<(it-ms.begin())<<endl;
    else cout<<"yes"<<endl;
    return 0;
}
