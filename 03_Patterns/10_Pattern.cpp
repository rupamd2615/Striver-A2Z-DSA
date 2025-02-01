#include<bits/stdc++.h>
using namespace std;
void print7(int n){
    for (int i = 1; i <=2*n-1; i++)
    {
        int stars;
        if(i>n){
            stars = 2*n - i;
        } else{
            stars = i;
        }
        for (int j = 1; j <= stars; j++)
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
        print7(n);
    }
    return 0;
}

// Input: 1 5
// 1 test case, for values 5

// Output:
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *