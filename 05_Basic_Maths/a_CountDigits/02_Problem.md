Problem statement
-----------------
Count number of digits of a given number n

## Shortcut
```cpp
int count = (int)(log10(n)+1);
```
## Pseudocode(Conventional)
```cpp
int count = 0;
while(n>0){
    int digits = n%10;
    n = n/10;
    count++;
}
cout << count;
```

## Time Complexity
for 'N/a' sort of operations, TC: O(loga(N))