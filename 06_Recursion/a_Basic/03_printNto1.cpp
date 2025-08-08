#include<bits/stdc++.h>
using namespace std;
void n2One(int i, int n){
    if(i > n) return;
    cout << n << endl;
    n2One(i,n-1);
}
int main(){
    int n;
    cin >> n;
    n2One(1,n);
    return 0;
}