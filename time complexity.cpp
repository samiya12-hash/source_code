#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 50;
    int *p;
    p = &n;
    cout<<*p<<endl;
    int **double_p;
    double_p = &p;
    cout<<**double_p<<endl;
    **double_p = 7934;
    cout<<**double_p<<endl;
    return 0;
}








//time ber korar library func. diye....

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    clock_t time_req;
    time_req = clock();
    int n;
    cin>>n;
    cout<<pow(n,4)<<endl;
    time_req = clock()-time_req ;
    //cout<<"time is: "<<(stop_s-start_s)/(double)(CLOCKS_PER_SEC)*1000<<endl;//for micro second
    cout<<(double)time_req/CLOCKS_PER_SEC<<endl;
    time_req = clock();
    int sum=1;
    for(int i=1;i<=4;i++){
     sum = sum*n;
    }
    cout<<sum<<endl;
    time_req = clock()-time_req;
    //cout<<"time is: "<<(stop_s-start_s)/(double)(CLOCKS_PER_SEC)*1000<<endl;//for micro second
    cout<<(double)time_req/CLOCKS_PER_SEC<<endl;
    return 0;
}
*/
