#include<bits/stdc++.h>
using namespace std;
void print7(int n){
    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j<i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j< 2*n -(2*i+1); j++)
        {
            cout << "*";
        }
        // Space
        for (int j = 0; j<i; j++)
        {
            cout << " ";
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

// Input: 1 7
// 1 test case, for values 7

// Output:
// *************
//  *********** 
//   *********  
//    *******   
//     *****    
//      ***     
//       * 