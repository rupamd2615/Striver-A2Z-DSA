#include<bits/stdc++.h>
using namespace std;
// internal operations
// vectors - single linked list
//  list - doubly linked list
// push_front() is cheaper than insert()
int main(){
    list<int> ls; //{}

    ls.push_back(2); //{2}
    for(auto it : ls){
        cout << it << " ";
    }
    cout<<endl;
    ls.emplace_back(4);// {2,4}
    for(auto it : ls){
        cout << it << " ";
    }
    cout<<endl;
    ls.push_front(5); // {5,2,4}
    for(auto it : ls){
        cout << it << " ";
    }
    cout<<endl;
    ls.emplace_front(); //{0,5,2,4};
    for(auto it : ls){
        cout << it << " ";
    }
    return 0;
}