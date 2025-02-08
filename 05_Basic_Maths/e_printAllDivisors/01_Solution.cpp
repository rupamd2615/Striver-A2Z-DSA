#include<bits/stdc++.h>
using namespace std;
void bruteForce(int n){
    for(int i=1;i<=n;i++){
        double rem = n%i;
        if(rem != 0) continue;
        else cout << i << " ";
    }
}

void optimal(int n){
    vector<int> v;
    for(int i=1;i<=(int)(sqrt(n));i++){
        if(n%i == 0){
            v.push_back(i);
            if((n/i)!=i) v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    for(auto it:v){
        cout<<it<<" ";
    }
}

int main(){
    int n;
    cin >> n;
    bruteForce(n); // TC : O(n)
    cout<<endl;
    optimal(n);
    cout<<endl;
    return 0;
}