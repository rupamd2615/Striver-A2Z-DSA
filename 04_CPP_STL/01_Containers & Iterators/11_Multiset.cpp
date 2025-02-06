#include<bits/stdc++.h>
using namespace std;
int main(){
    // Everything is same as sets
    // only difference is it stores duplicate elements also

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}

    // auto it1 = ms.find(1);
    // auto it2 = ms.find(1)+2;
    // ms.erase(it1, it2); // delete iterators instead of elements
    // for(auto it:ms){
    //     cout<<it<<" ";
    // }
    
    return 0;
}