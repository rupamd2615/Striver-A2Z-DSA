#include<bits/stdc++.h>
using namespace std;
// take array inputs and print using for loops
// Arrays are always passed by reference by default, no need for that extra '&' sign

void doSomething(int arr[], int n){
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;
}
int main(){
    int n =5;
    int arr[n];
    for(int i = 0; i<n;i++){
        // cout << i << endl;
        cin >> arr[i];
    }

    for(int i = 0; i<n;i++){
        // cout << i << endl;
        cout << arr[i] << endl;
    }

    doSomething(arr,n);
    cout << "Value inside int main: " << arr[0] << endl;

    return 0;
}