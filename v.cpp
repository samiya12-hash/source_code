#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> st;
    st.insert(8);
    st.insert(10);
    st.insert(4);
    st.insert(6);
    for(int x : st) {
        cout << x << ' ';
    } cout << endl;
    st.insert(4);
    cout << "inserted 4 again" << endl;
    for(int x : st) {
        cout << x << ' ';
    } cout << endl;
    st.erase(10);
    cout << "after erasing 10" << endl;
    for(int x : st) {
        cout << x << ' ';
    } cout << endl;
    cout << *st.begin() << endl;
    cout << *(--st.end()) << endl;
    cout << *st.rbegin() << endl;
    cout << "count(5) = " << st.count(5) << endl;
    cout << "count(10) = " << st.count(10) << endl;
    if(st.find(9) != st.end()) {
        cout << "Yes, there is" << endl;
    } else {
        cout << "No, there isn't" << endl;
    }
    auto it = st.find(6);
    cout << *it << endl;
    cout << "previous element: " << *(--it) << endl;
    cout << "main element: " << *(++it) << endl;
    cout << "next element: " << *(++it) << endl;
    it = st.find(8);
    cout << "previous: " << *prev(it) << endl;
    cout << "this: " << *it << endl;
    cout << "next: " << *next(it) << endl;

    st.erase(it);

    cout << "after erasing it:\n";
    for(int x : st) {
        cout << x << ' ';
    } cout << endl;
}
