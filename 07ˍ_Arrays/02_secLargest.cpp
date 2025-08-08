#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr [] = {1,2,4,7,7,5};
    int n = 6;
    int largest = arr[0];
    int sLargest = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            sLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>sLargest){
            sLargest = arr[i];
        }
    }
    cout<< "Second largest element: " << sLargest;
    return 0;
}