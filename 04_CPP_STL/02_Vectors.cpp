#include<bits/stdc++.h>
using namespace std;
// Vectors in STL are basically dynamic arrays that have the ability to change their size whenever new element is added or removed from it
int main(){
    // syntax
    vector<int> v1; //creates an empty container

    v1.push_back(1);
    v1.emplace_back(2);

    // vector of pair type
    vector<pair<int,int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(1,4);

    // create non-empty vector
    vector<int> v(5); // it creates a vector with 5 instances of 0 or any garbage value as per the compiler
    vector<int> v(5,100); // it creates a vector with 5 instances of 100

    // copy of a vector
    vector<int> v1(5,20);
    vector<int> v2(v1);

    return 0;
}