#include<bits/stdc++.h>
using namespace std;
void print7(int n){
    for (int i = 1; i <=n; i++)
    {
        char ch = 'A'+i-1;
        for(int j=0;j<i;j++){
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
// B B 
// C C C 
// D D D D 
// E E E E E 