#include<bits/stdc++.h>
using namespace std;
void print21(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n){
                cout << "*";
            }
            else cout << " ";
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
        print21(n);
    }
    return 0;
}

// Input: 1 4
// 1 test case, for values 1 4

// Output:
// ****
// *  *
// *  *
// ****