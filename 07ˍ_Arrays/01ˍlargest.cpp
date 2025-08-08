#include<bits/stdc++.h>
using namespace std;

int main (){
    int arr [] = {3,2,1,5,2};
    //Brute-force
    sort(arr, arr+5);
    cout << "Largest Element: " << arr[4] << endl;
    cout << "Brute Force Method" << endl;
    cout << "Time Complexity: O(nlogn)" << endl;
    cout << "Space Complexity: O(1)" << endl;
    cout << endl;
    //Optimized
    int largest = arr[0];
    for(int i=0;i<5;i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }

    cout<<"Largest Element: "<<largest<<endl;
    cout << "Optimized Method" << endl;
    cout << "Time Complexity: O(n)" << endl;
    cout << "Space Complexity: O(1)" << endl;
    return 0;
}