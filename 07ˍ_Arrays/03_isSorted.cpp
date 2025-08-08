#include<bits/stdc++.h>
using namespace std;

bool isSorted(int n, vector<int> a){
    for(int i=1;i<=n;i++){
        if(a[i]>=a[i-1]){
            
        }
        else return false;
    }
    return true;
}

int main(){
    int n = 6;
    vector<int> v1 = {1,2,7,4,5,6};
    cout << boolalpha << isSorted(n,v1);

    return 0;
}