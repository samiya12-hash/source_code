#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms;
    ms.insert(2);
    ms.insert(5);
    ms.insert(5);
    ms.insert(10);
    for(int x : ms) {
        cout << x << ' ';
    } cout << endl;
    auto it = ms.find(5);
    cout << "previous: " << *prev(it) << endl;
    cout << "this: " << *it << endl;
    cout << "next: " << *next(it) << endl;

    ms.erase(ms.find(5));
    for(int x : ms) {
        cout << x << ' ';
    } cout << endl;

}
