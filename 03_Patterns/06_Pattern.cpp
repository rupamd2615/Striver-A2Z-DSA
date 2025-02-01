#include<bits/stdc++.h>
using namespace std;
void print5(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout << j;
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
    print5(n);
    }
    return 0;
}

// Input: 2 3 5
// 2 test cases, for values 3 & 5

// Output:
// 123
// 12
// 1
// 12345
// 1234
// 123
// 12
// 1