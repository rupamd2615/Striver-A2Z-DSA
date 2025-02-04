#include<bits/stdc++.h>
using namespace std;
void print20(int n){
    //  // top
    int iniS = 2*n-2;
    for(int i=1;i<=n;i++){
        // stars
        for(int j=1; j<=i;j++){
            cout << "* ";
        }
        // space
        for(int j= 0; j<iniS; j++){
            cout << "  ";
        }
        // stars
        for(int j=1; j<=i;j++){
            cout << "* ";
        }
        iniS -=2;
        cout << endl;
    }
}
void print20b(int n){
    //  // top
    int iniS = 0;
    for(int i=1;i<=n;i++){
        // stars
        for(int j=1; j<=n-i+1;j++){
            cout << "* ";
        }
        // space
        for(int j= 0; j<iniS; j++){
            cout << "  ";
        }
        // stars
        for(int j=1; j<=n-i+1;j++){
            cout << "* ";
        }
        iniS +=2;
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        print20(n);
        print20b(n);
    }
    return 0;
}

// Input: 1 5 
// 1 test case, for values 1 5 

// Output:
// *                 * 
// * *             * * 
// * * *         * * * 
// * * * *     * * * * 
// * * * * * * * * * * 
// * * * * * * * * * * 
// * * * *     * * * * 
// * * *         * * * 
// * *             * * 
// *                 * 