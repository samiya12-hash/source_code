#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///simple insert erase find
    set <int> s;
    set <int> ::iterator it;
    s.insert(4);
    s.insert(3244);
    s.insert(4324);
   for(it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }
    it = s.end(); it--;
    cout << *it << "\n";
    int n;
    cout<<"enter a number to find : ";
    cin>>n;
    it = s.find(n);
    if(it!= s.end())cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    int e;
    cout<<"enter a number to erase : ";
    cin>>e;
    s.erase(s.find(e));
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }
    pair<set <int> ::iterator,bool> p;
    p = s.insert(4);
    if(p.second==false)cout<<"no";
    else cout<<"yes"<<endl;
    /*set <pair<string,int> >s;
    set <pair<string,int> >::iterator it;
    s.insert(make_pair("samiya",4));
    s.insert(make_pair("tithi",3244));
    s.insert(make_pair("samin",4324));
   for(it=s.begin();it!=s.end();it++){
        cout<<it->first<<' '<<it->second<<endl;
    }*/
    return 0;
}
