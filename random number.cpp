#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    time_t t;
    srand((unsigned) time(&t));
    while(true)
    {
        int n;
        cout<<"enter a number again()";
        cin>>n;
        int j = rand()%10;
        if(n==j)
        {
            cout<<"you win"<<"\n";
            break;
        }
        else cout<<"try again"<<"\n"<<"the random number was: "<<j<<endl;
    }
    getch();
}
