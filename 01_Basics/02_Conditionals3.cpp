#include<bits/stdc++.h>
using namespace std;
/**
 * Take the age from the user then decide accordingly
 * 1. If age < 18;
 *      print-> not eligible for job
 * 2. If age >= 18 and age<=54
 *      print-> eligible for job
 * 3. If age >= 55 and age <= 57;
 *      print-> eligible for job, but will retire soon
 * 4. If age > 57;
 *      print-> retirement time
 */

int main(){
    int age;
    cin >> age;
    if(age<18){
        cout << "not eligible for job";
    }
    else if(age<=57){
        cout << "Eligible for job";
        if(age>=55){
            cout << ", but will retire soon";
        }
    }
    else
        cout << "Retirement time";
    return 0;
}