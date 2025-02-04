#include<bits/stdc++.h>
using namespace std;
void print17(int n){
    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j<=n-i-1; j++)
        {
            cout << " ";
        }
        // alphabets
        char ch ='A';
        int breakpoint = (2*i+1)/2;
        for(int j=1; j<=2*i+1; j++){
            cout << ch;
            if(j<=breakpoint){
                ch++;
            }else ch--;
        }
        // Space
        for (int j = 0; j<=n-i-1; j++)
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
        print17(n);
    }
    return 0;
}

// Input: 1 5
// 1 test case, for values 5

// Output:
//      A     
//     ABA    
//    ABCBA   
//   ABCDCBA  
//  ABCDEDCBA 