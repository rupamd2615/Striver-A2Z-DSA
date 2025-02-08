#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
	// Regular Method
    // int cnt =0;
	// while(n>0){
    //     n = n/10;
    //     cnt++;
    // }

    // Stylish method
    int cnt = (int)(log10(n)+1);
    return cnt;
}

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
    cin >> n;
    cout<< countDigits(n)<<endl;
    }
    return 0;
}