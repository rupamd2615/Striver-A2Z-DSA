#include<bits/stdc++.h>
using namespace std;
// push & pop: O(log n), top: O(1)
int main(){
    // Maxiumum heap
    priority_queue<int> pq; //implemented using tree data structure

    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout << pq.top()<< endl; // prints 10
    pq.pop();
    cout<<pq.top(); // prints 8

    cout<<endl;
    // Minimum heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5); //{5}
    pq1.push(2); //{2,5}
    pq1.push(8); //{2,5,8}
    pq1.emplace(10); //{2,5,8,10}

    cout << pq1.top()<< endl; // prints 2
    pq1.pop();
    cout<<pq1.top(); // prints 5
    return 0;
}