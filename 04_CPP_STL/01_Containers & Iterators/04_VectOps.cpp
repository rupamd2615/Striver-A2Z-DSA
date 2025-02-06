#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {10, 23, 45, 83, 72};
    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;
    // Deletion: erase()
    // erase one element by giving the location
    v.erase(v.begin()+1);
    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;
    // erase range of elements by giving location range from start to (next to the element to be deleted)
    // [start, end) -- this is the range
    v.erase(v.begin()+1, v.begin()+3);
    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;
    // Insertion: insert()
    vector<int> v2(2,100);
    for(auto it : v2){
        cout << it << " ";
    }
    cout << endl;
    // insert in the begining
    v2.insert(v2.begin(),300);
    for(auto it : v2){
        cout << it << " ";
    }

    cout << endl;
    // insert at a location
    v2.insert(v2.begin()+1,400);
    for(auto it : v2){
        cout << it << " ";
    }

    cout << endl;
    //insert repeating elements
    v2.insert(v2.begin()+2,2,40);
    for(auto it : v2){
        cout << it << " ";
    }
    cout << endl;
    // insert a vector in a vector
    vector<int> copy(2,50);
    v2.insert(v2.begin()+1,copy.begin(), copy.end());
    for(auto it : v2){
        cout << it << " ";
    }
    cout << endl;
    // size
    cout << v2.size();

    cout << endl;
    // pop
    v2.pop_back();
    for(auto it : v2){
        cout << it <<" ";
    }

    cout << endl;
    // swap
    v2.swap(v);
    for(auto it : v2){
        cout << it <<" ";
    }
    cout << endl;
    for(auto it : v){
        cout << it <<" ";
    }

    // clear()
    v.clear();

    cout << endl;
    v.insert(v.begin(),23);
    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;
    cout << v.empty();
    return 0;
}