#include<bits/stdc++.h>
using namespace std;
void pfactor(int n)
{
    vector <int> vec;
    while(n%2==0){
        //cout<<"2"<<' '<<endl;
        vec.push_back(2);
        n = n/2;
    }
    for(int i=3;i<=sqrt(n);i++){
       while(n%i==0){
        vec.push_back(i);
        n = n/i;
       }
    }
    if(n>2){
        vec.push_back(n);
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<' ';
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    pfactor(n);
}
