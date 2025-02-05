#include<bits/stdc++.h>
using namespace std;
int main(){
    // LIFO : Last In First Out
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5);

    cout<< st.top() << endl;

    // indexing not allowed in stack, only 3 standard functions are there
    // push(), pop(), top() - everything constant time, O(1)
    st.pop();
    cout << st.top()<<endl;

    cout<< st.size()<<endl;
    cout<< st.empty();

    // swap
    stack<int> st1,st2;
    st1.swap(st2);
    return 0;
}