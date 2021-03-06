#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c,n;
    cin>>a>>b>>n;
    c = a&b;//gun
    cout<<c<<endl;
    c = a|b;//jog
    cout<<c<<endl;
    c = a^b;//bijor shonkhak 1 thakle 1;
    cout<<c<<endl;
    c = a>>n;//n bar 2 dara bhag//
    cout<<c<<endl;
    c = a<<n;//n bar 2 dara gun;
    cout<<c<<endl;
    c = a-b;
    cout<<c<<endl;
    getch();
}
