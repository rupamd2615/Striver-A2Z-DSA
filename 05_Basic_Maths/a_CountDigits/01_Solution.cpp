#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
	// Write your code here.
	int N = n;
	int cnt = 0;
	while (n > 0) {
        int lastDigit = n % 10;
        n = n / 10;
        
        if (lastDigit == 0)
            continue;
        
        if (N % lastDigit == 0) {
            cnt++;
        }
    }
    
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