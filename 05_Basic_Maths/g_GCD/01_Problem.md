# GCD/HCF
- Brute force method, wit TC: O(n)
- Euclidean Algorithm
```
gcd(a,b) = gcd(a-b,b) if a>b

gcd(a,b) = gcd(a%b,b) if a>b
```