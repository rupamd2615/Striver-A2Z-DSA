#include<bits/stdc++.h>
// resides in the utility library
using namespace std;
int main(){
    // syntax
    pair <int, char > p = {1,'k'};
    cout << p.second << endl;

    // nested pair
    pair<int, pair<int,int>> p1 = {1,{3,4}};
    cout << p1.second.first << endl;

    // We can declare array of pairs as well
    pair<int,int> arr[] = {{1,4}, {1,6}, {2,5}};
    cout << arr[1].second;
    return 0;
}