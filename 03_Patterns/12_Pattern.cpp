#include<bits/stdc++.h>
using namespace std;
void print7(int n){
    int space = 2*n -2;
    for (int i = 1; i <= n; i++)
    {
        // num
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        
        // num
        for (int j = i; j >=1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        print7(n);
    }
    return 0;
}

// Input: 1 5
// 1 test case, for values 5

// Output:
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321