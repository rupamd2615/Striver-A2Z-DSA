#include<bits/stdc++.h>
using namespace std;
// write a program that takes an input of 
// age and prints if you are adult or not
int main(){

    int age;
    cin >> age;
    if(age<18){
        cout << "Age: " << age << ", so NOT AN ADULT";
    }
    else
        cout << "Age: " << age << ", so AN ADULT";
    return 0;
}