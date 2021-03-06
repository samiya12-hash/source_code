#include<bits/stdc++.h>
///last in first out....
using namespace std;
int main()
{
    stack <string> ch;
    ch.push("samiya");
    ch.push("tithi");
    ch.push("samin");
    /*cout<<ch.top()<<endl;
    ch.pop();
    cout<<"after erasing top element "<<endl;
    cout<<ch.top()<<endl;
    */
    while(!ch.empty())
    {
        string x;
        x = ch.top();
        cout<<ch.top()<<endl;
        ch.pop();
    }
    return 0;
}
