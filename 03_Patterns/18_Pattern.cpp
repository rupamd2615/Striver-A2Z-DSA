#include<bits/stdc++.h>
using namespace std;
void print18(int n){
    for(int i=1;i<=n;i++){
        // char ch = 'A'+i -1;
        for(char ch='A';ch<='A'+i-1;ch++){
            char result = ch + n - i;
            cout << result;
        }
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        print18(n);
    }
    return 0;
}

// Input: 1 7
// 1 test case, for values 7

// Output:
// E
// DE
// CDE
// BCDE
// ABCDE