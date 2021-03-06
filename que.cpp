///queue te mainly decreasing order e print hoi
///but if we want to print increasing order we can try this code..
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>> q;
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(2);
    cout << q.top() << "\n"; // 7
    q.pop();
    cout << q.top() << "\n"; // 5
    q.pop();
    q.push(6);
    cout << q.top() << "\n"; // 6
    q.pop();
    while(!q.empty())
    {
        int x;
        x = q.top();
        cout<<x<<endl;
        q.pop();
    }
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///queue..

    queue <int> q;
    q.push(4);
    q.push(5);
    q.push(7);
    q.push(8);
    //cout<<q.front()<<endl;
    while(!q.empty())
    {
        int x;
        x = q.front();
        cout<<x<<endl;
        q.pop();
    }
}
///priority queue..
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> q;
    q.push(4);
    q.push(6);
    q.push(3);
    q.push(42);
    q.push(3234);
    q.push(376);
    while(!q.empty())
    {
        int x;
        x = q.top();
        cout<<x<<endl;
        q.pop();
    }
    return 0;
}*////lexico graphical order er ulta..
/*    priority_queue<string> q;
    q.push("samiya");
    q.push("samin");
    q.push("ultapalta");
    q.push("fdhj");
    while(!q.empty())
    {
        string x;
        x = q.top();
        cout<<x<<endl;
        q.pop();
    }
    return 0;
}*/
