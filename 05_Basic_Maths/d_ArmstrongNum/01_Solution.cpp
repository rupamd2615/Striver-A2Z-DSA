#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int org = n;
    int arm = 0;
    while(n>0){
        int ld = n%10;
        n=n/10;
        arm += pow(ld,3);
    }
    if(arm == org) cout << "Armstrong Number";
    else cout << "Not an Armstrong Number";
    return 0;
}