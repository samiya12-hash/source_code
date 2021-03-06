#include<bits/stdc++.h>
using namespace std;
int  main()
{
    ///list porichity:...push sort reverse
    /*list <int> mylist;
    list <int>::iterator i;
    mylist.push_back(45);
    mylist.push_front(4);
    mylist.push_front(5);
    mylist.push_front(95);
    mylist.push_front(49);
    mylist.push_back(4);
    cout<<mylist.size()<<endl;
    mylist.sort();///boro to choto;
    for(i=mylist.begin();i!=mylist.end();i++){
        cout<<*i<<endl;
    }
    cout<<endl;
    mylist.pop_back();
    for(i=mylist.begin();i!=mylist.end();i++){
        cout<<*i<<endl;
    }
    cout<<endl<<endl;
    mylist.reverse();
    for(i=mylist.begin();i!=mylist.end();i++){
        cout<<*i<<endl;
    }
    mylist.clear();
    cout<<mylist.empty();
    */
    ///copy of an array in a list...:)
    /*int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    list<int>mylist(ar,ar+n);
    list<int>::iterator it;
    for(it = mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<endl;
    }
    it = mylist.begin();
    int p;
    cout<<"enter a position: "<<endl;
    cin>>p;
    int num;
    cout<<"the number is"<<endl;
    cin>>num;
    for(int j=1;j<p;j++)
    {
        it++;
    }
    mylist.insert(it,num);
    for(it = mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<endl;
    }
    cout<<"--------------------------------------"<<endl;
    mylist.pop_back();
    for(it = mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<endl;
    }

    cout<<"-----------------------------------------"<<endl;
    mylist.pop_front();
     for(it = mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<endl;
    }*/
    ///erase remove find insert;
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    list <int> mylist(ar,ar+n);
    list <int>::iterator it;
    int num;
    cout<<"num: ";
    cin>>num;
    it = find(mylist.begin(),mylist.end(),num);
    if(it == mylist.end())cout<<"not found"<<endl;
    else cout<<"found"<<endl;
    cout<<"enter a number to remove :";
    int o;
    cin>>o;
    mylist.remove(o);
    cout<<endl<<"after removing: "<<endl;
    for(it = mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<endl;
    }
    string ch;
    cout<<"erase part: "<<endl<<endl;
    cout<<"ki diba position or array theke akta number: ";
    cin>>ch;
    it = mylist.begin();
    if(ch[0]=='p')
    {
        int p;
        cout<<"position please:  ";
        cin>>p;
        for(int i=1;i<p;i++)
        {
            it++;
        }
    mylist.erase(it);
    cout<<endl<<endl;
    for(it = mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<endl;
    }
    }
    else {
        int n2;
        cout<<"number please: ";
        cin>>n2;
        it = find(mylist.begin(),mylist.end(),n2);
        mylist.erase(it);
        cout<<endl<<endl;
        for(it = mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<endl;
    }
    }
    return 0;
}
