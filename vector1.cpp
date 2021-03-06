#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> vec(5);
    vector <int>::iterator i;
    //vector <int>:: reverse_iterator ri;
    for(int i=0;i<5;i++){
        cin>>vec[i];
    }
    cout<<"real tar last number hoche: "<<vec.back()<<endl;
    cout<<"real tar size hoche : "<<vec.size()<<endl;
    cout<<"real ta hoilo : "<<endl;
    for(i=vec.begin();i!=vec.end();++i){
    cout<<*i<<endl;
    }
    int n;
    for(int i=1;i<=2;i++){
    cin>>n;
    vec.push_back(n);
    }
    cout<<"push back er por: "<<endl;
    cout<<"size is: "<<vec.size()<<endl;
    for(i=vec.begin();i<vec.end();i++){
        cout<<*i<<endl;
    }
    vec.pop_back();
    cout<<"after that the size is: "<<vec.size()<<endl;
    cout<<"at last!!!"<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }
    cout<<"prothom charta delete korar por: "<<endl;
    vec.erase(vec.begin(),vec.begin()+4);
    cout<<"after erasing 1 to 4th elements the array is: "<<endl;
    for(int i:vec){
        cout<<i<<' '<<endl;
    }
    cout<<"bhalo !!!"<<endl;
    cout<<"empty naki???"<<"if 1 than empty else not"<<endl<<"ans ta hoche: "<<vec.empty();
    int p;
    cout<<"amake kichu number dao,resize korbo to: ";
    for(int i=1;i<=5;i++){
        cin>>p;
        vec.push_back(p);
    }
    vec.resize(10);
    cout<<"dekho ki obostha!!: "<<endl;
    for(i=vec.begin();i<vec.end();i++){
        cout<<*i<<endl;
    }
    vec.clear();
    cout<<"after clearing the size is: "<<vec.size()<<endl;
}
