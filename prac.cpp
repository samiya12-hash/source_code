#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{

    int a,b;
    double div,sum,sub,mul;
    cin>>a>>b;
    sum = a+b;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(4);
    cout<<"sum is: "<<sum<<endl;
    sub = a-b;
    cout<<"biyog is: "<<sub<<endl;
    cout<<noshowpoint;
    div = (float)a/(float)b;
    cout<<"bhag hoche: "<<div<<endl;
    mul = a*b;
    cout<<"gun hoche: "<<mul<<endl;
    getch();
}
