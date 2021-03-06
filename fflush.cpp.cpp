#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int a;
    while(true){
    cin>>a;
    fflush(stdout);
    cout<<a<<endl;
    if(a==42)break;
    }
	return 0;
}
