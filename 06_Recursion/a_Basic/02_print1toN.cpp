#include<bits/stdc++.h>
using namespace std;
void one2N(int i, int n){
    if(i > n) return;
    cout << i << endl;
    one2N(i+1,n);
}
int main(){
    int n;
    cin >> n;
    one2N(1,n);
    return 0;
}