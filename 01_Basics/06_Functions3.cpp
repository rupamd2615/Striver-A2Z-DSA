#include<bits/stdc++.h>
using namespace std;
// pass by value -> sends a copy of the original value and modifies and stuff with it
void doSomething(int num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

// pass by reference -> does modifications on the original data instead of making a copy of it
void doSomething2(int &num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main(){
    int num = 10;
    int num2 = 10;
    doSomething(num);
    cout << num << endl << endl;
    doSomething2(num2);
    cout << num2 << endl;
    return 0;
}