/*#include<bits/stdc++.h>
using namespace std;
int main()
///multi ta niche..
{//map ...
    // insert find erase clear empty...
    map <string, int> m;
    map <string, int>::iterator it;
    m["samiya"]= 56;
    m["tithi"]= 76;
    m.insert(make_pair("sajjs",65));
    //cout<<m["sam"]<<endl;
    for(it = m.begin();it!= m.end();it++)
    {
        cout<<it->first<<' '<<it->second<<endl;
    }
    cout<<endl<<endl;
    it = m.begin();
    string ch;
    cout<<"enter a string fom the map..."<<endl;
    cin>>ch;
    it = m.find(ch);
    m.erase(it);
    cout<<"after erasing : "<<endl<<endl;
    for(it = m.begin();it!= m.end();it++)
    {
        cout<<it->first<<' '<<it->second<<endl;
    }
    cout<<endl;
    m.clear();
    cout<<m.empty()<<endl;
    return 0;
}
*/
/*#include <iostream>
#include <map>

int main ()
{
  std::map<char,int> mymap;
  std::map<char,int>::iterator itlow,itup;

  mymap['a']=20;
  mymap['b']=40;
  mymap['c']=60;
  mymap['d']=80;
  mymap['e']=100;

  itlow=mymap.lower_bound ('c');  // itlow points to b
  itup=mymap.upper_bound ('d');   // itup points to e (not d!)

  mymap.erase(itlow,itup);        // erases [itlow,itup)

  // print content:
  for (std::map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';

  return 0;
}
*/
///multimap
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap <string,int>ms;
    //multimap <string,int>:: iterator it;
    ms.insert(make_pair("samiya",4));
    ms.insert(make_pair("hags",543));
    ms.insert(make_pair("hags",543));
    for(int x:ms)
    {
        cout<<x<<' '<<endl;
    }
    return 0;
}

