#include<bits/stdc++.h>
using namespace std;
int main(){
    // Deque - double ended queue
    deque<int> dq;
    dq.push_back(1);
    for(auto it : dq){
        cout << it <<" ";
    }
    cout << endl;
    dq.emplace_back(2);
    for(auto it : dq){
        cout << it <<" ";
    }
    cout << endl;
    dq.push_front(4);
    for(auto it : dq){
        cout << it <<" ";
    }
    cout << endl;
    dq.emplace_front(3);
    for(auto it : dq){
        cout << it <<" ";
    }
    cout << endl;

    dq.pop_back();
    for(auto it : dq){
        cout << it <<" ";
    }
    cout << endl;
    dq.pop_front();
    for(auto it : dq){
        cout << it <<" ";
    }
    cout << endl;

    cout<< dq.back();
    cout<<endl;
    cout<< dq.front();
    return 0;
}