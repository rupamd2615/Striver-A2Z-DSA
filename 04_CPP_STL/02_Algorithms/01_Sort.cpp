#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // if(p1.second == p2.second) i.e. they are same
    if(p1.first>p2.first) return true;
    return false;
}
int main(){
    // Syntax
    // sort(a,a+n);
    vector<int> v = {1,3,2,5};
    sort(v.begin(),v.end());
    for(auto it:v){
        cout<<it<<endl;
    } //sorted container

    // Descending order, use the in-built comparator, greater<int>
    // sort(a,a+n,greater<int>);
    
    // custom sorting
    pair<int,int> a[] ={{1,2},{2,1},{4,1}};
    // sort it acc to increasing second element
    // if second element is same then sort according to first element but in descending

    // Syntax
    // sort(a,a+n,comp) where comp: Self-written comparator
    

    return 0;
}