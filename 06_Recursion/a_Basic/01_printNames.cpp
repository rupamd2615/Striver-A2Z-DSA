#include<bits/stdc++.h>
using namespace std;
// print names multiple times using recursion
void name(int i, int n){
    if(i>n) return;
    cout << "Rupam" << endl;
    name(i+1,n);
}
int main(){
    int n;
    cin >> n;
    name(1,n);
    return 0;
}