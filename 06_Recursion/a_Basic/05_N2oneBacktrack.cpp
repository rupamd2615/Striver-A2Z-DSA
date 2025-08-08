#include<bits/stdc++.h>
using namespace std;
void NtoOnebt(int i, int n){
    if(i<1) return;
    NtoOnebt(i-1,n);
    cout << i<< endl;
}

int main(){
    int n;
    cin >> n;
    NtoOnebt(n,n);
    return 0;
}