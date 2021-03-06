#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
   illigible:
       cout<<"enter your number"<<"\n";
       int num;
       cin>>num;
       if(num!=rand()%5){
         cout<<"you loss!!!"<<"\n";
        goto illigible;
       }
       else {
        cout<<"you are win!!"<<"\n";
       }
       return 0;
}
