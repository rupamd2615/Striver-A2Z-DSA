#include<bits/stdc++.h>
using namespace std;
void one2Nbt(int i, int n){
    if(i<1) return;
    one2Nbt(i-1,n);
    cout << i<< endl;
}

int main(){
    int n;
    cin >> n;
    one2Nbt(n,n);
    return 0;
}