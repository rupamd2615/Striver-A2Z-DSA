#include<bits/stdc++.h>
using namespace std;
// iterator points to the memory adress where the element is actually lying
int main(){
    vector<int> v = {20,10,15,6,7};
    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " "; // v.begin() gives you the memory address, * operator access the element on that address

    it += 2;
    cout << *(it) << " ";

    // v.end() won't point to the last element instead it'd point right after the memory address of the last element
    vector<int>::iterator it2 = v.end();

    // v.rend() - reverse end
    // v.rbegin() - reverse begin

    cout << v.back() << endl; // current last element 

    // Print an entire vector
    for(vector<int>::iterator it2 = v.begin(); it2 != v.end();it2++){
        cout<< *(it2) << " ";
    }
    cout << endl;

    // auto assignment
    for(auto it2=v.begin();it2 !=v.end();it2++){
        cout<< *(it2) << " ";

    }
    cout << endl;

    // for each
    for(auto it2 : v){
        cout<< it2 << " ";
    }
    return 0;
}