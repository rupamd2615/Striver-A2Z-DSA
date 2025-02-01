#include<bits/stdc++.h>
using namespace std;
void print7(int n){
    for (int i = 1; i <= n; i++)
    {
        for(char ch='A' ; ch<='A'+i -1 ; ch++){
            cout << ch << " ";
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
        print7(n);
    }
    return 0;
}

// Input: 1 5
// 1 test case, for values 5

// Output:
// A 
// A B 
// A B C 
// A B C D 
// A B C D E 