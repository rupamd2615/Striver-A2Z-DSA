### 1. Find the time complexity of the code given below.
```cpp
for(int i = 0; i<n; i++){
    for(int j=0; j<n; j++){
        // Some code here
    }
}
```
### Ans: TC = O(n^2)

### 2. Find the time complexity of the code given below.
```cpp
for(int i = 0; i<n; i++){
    for(int j=0; j<=i; j++){
        // Some code here
    }
}
```
### Ans: 
for i=0 => [ j=0 ] \
for i=1 => [ j=0,1 ] \
for i=2 => [ j=0,1,2 ] \
... \
for i=n-1 => [ j=0,1,2,...,n-1 ]

#### So, TC = 1+2+3...+n = n(n+1)/2 = n^2/2 + n/2 ≈ O(n^2/2) ≈ O(n^2)


