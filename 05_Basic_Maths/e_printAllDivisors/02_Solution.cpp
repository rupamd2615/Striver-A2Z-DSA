#include<bits/stdc++.h>
using namespace std;
// Brute-force

int bruteForce(int n){
    long long total = 0;
    for (int i = 1; i <= n; i++) {
        long long currentSum = 0;
        // Calculate sum of divisors of 'i'
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                currentSum += j;
            }
        }
        total += currentSum;
    }
    return total;
}


// Optimal Approach

// The key insight is that each divisor d contributes to the sum of divisors for all multiples of d up to n. For example, the divisor 2 contributes to the sum of divisors for all even numbers up to n. The number of times a divisor d contributes is given by the count of its multiples, which is floor(n/d). Thus, the total contribution of each divisor d is d * floor(n/d). Summing these contributions for all divisors from 1 to n gives the desired result.

int sumOfAllDivisors(int n){
    long long total = 0;
    for (int d = 1; d <= n; d++) {
        total += d * (n / d);
    }
    return total;
}
int main(){
    int n;
    cin >> n;
    cout<< bruteForce(n);
    cout << endl;
    cout<< sumOfAllDivisors(n);
    return 0;
}