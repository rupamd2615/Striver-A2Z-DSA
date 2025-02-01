#include<bits/stdc++.h>
using namespace std;
void print7(int n){
    int count =1;
    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=i;j++){
            cout << count << " ";
            count++;
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
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 