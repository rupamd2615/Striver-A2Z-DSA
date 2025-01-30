#include<bits/stdc++.h>
using namespace std;
// Take two nums and print its sum
// function with areturn data type must always be given a return line otherwise it will throw some garbage value for edge cases
int sum(int num1, int num2){
    int num3 = num1+num2;
    return num3;
}
int maxx(int num1, int num2){
    if(num1>=num2){
        return num1;
    }
    // looking for a return line
    return num2;
}
int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int res = sum(num1,num2);
    cout << res << endl;

    // in-built functions
    int minimum = min(num1, num2);
    cout << minimum << endl;

    int maximum = maxx(num1, num2);
    cout << maximum << endl;

    return 0;
}