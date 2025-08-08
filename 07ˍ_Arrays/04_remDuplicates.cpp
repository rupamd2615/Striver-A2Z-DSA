//Remove Duplicates from a sorted array


//Brute-force approach, use a set for finding unique elements, and then iterate the o/p into an array || O(nlogn + n)

//Optimal Approach: Two Pointers || O(n)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,1,2,2,2,3,3};
    int n = 7;
    int i =0;
    for(int j=1;j<n;j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    cout << "Size of the new array with unique elements: "<< (i+1);
    return 0;
}