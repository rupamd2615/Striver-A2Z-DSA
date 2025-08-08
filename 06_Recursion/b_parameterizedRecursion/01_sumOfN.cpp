#include<bits/stdc++.h>
using namespace std;

void sum2(int i, int sum){
    if(i<1){
        cout << sum;
        return;
    }
    sum2(i-1,sum+i);
}


int main(){
    int s =0;
    int n;
    cin >>n;
    sum2(n,0);
    return 0;
}