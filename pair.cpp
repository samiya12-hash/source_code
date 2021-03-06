#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///pair basic..
    /*pair <string,int> m;
    m.first = "jsakfj";
    m.second = 234;
    cout<<m.first<<' '<<m.second<<endl;
    */
    ///you can a create a pair in a vector//list..
    vector<pair<string,int> > vec;
    vector<pair<string,int> >::iterator it;
    vec.push_front(make_pair("fafjafds",54));
    vec.push_back(make_pair("samiya",73));
     vec.push_back(make_pair("tithi",43));
      vec.push_back(make_pair("faf",543));
     vec.push_back(make_pair("aff",345));
     for(it = vec.begin();it!=vec.end();it++)
     {
         cout<<it->first<<' '<<it->second<<endl;
     }
     cout<<endl;
    return 0;
}

