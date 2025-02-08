#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int org = n;
    int revNum = 0;
    int ld;
    while(n>0){
        ld = n%10;
        n = n/10;
        revNum = (revNum*10)+ld;
    }
    if(revNum == org) cout << "Palindrome";
    else cout << "Not a Palindrome";
    return 0;
}