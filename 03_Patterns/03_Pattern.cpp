#include<bits/stdc++.h>
using namespace std;
void print3(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j+1;
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
    print3(n);
    }
    return 0;
}

// Input: 2 3 5
// 2 test cases, for values 3 & 5

// Output:
// 1
// 12
// 123
// 1
// 12
// 123
// 1234
// 12345