#include<bits/stdc++.h>
using namespace std;
int main(){
    // Sets : Sorted order and unique elements, TC: O(log n)
    set<int> st;
    st.insert(1); //{1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2}
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4}

    cout<< st.size(); //prints 4

    // {1,2,3,4,5}
    auto it = st.find(3); //points to the location of '3' here

    auto it2 = st.find(6); //If the element isn't in the set then the iterator points to st.end()

    st.erase(5);

    // count
    int cnt = st.count(1);

    auto it3 = st.find(3);
    st.erase(it3);

    // erase in range
    auto ita = st.find(2);
    auto itb = st.find(4);
    st.erase(ita,itb);

    auto itC = st.lower_bound(2);
    auto itD = st.upper_bound(3);
    return 0;
}