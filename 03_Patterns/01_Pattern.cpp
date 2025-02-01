#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
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
    print1(n);
    }
    return 0;
}

// Input: 2 3 5
// 2 test cases, for values 3 & 5

// Output:
// ***
// ***
// ***
// *****
// *****
// *****
// *****
// *****