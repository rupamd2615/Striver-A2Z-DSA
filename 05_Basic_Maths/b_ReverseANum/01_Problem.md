# Reverse a Number
## Problem Statement
Write the program to generate the reverse of a given number.
Note: If a number has trailing zeros, then Reverse will not include them.
For e.g.
    Reverse of 10400 will be 401 instead of 00401

## Solution
### Shortcut Method
```cpp
int revNum = 0;
revNum = (revNum*10)+lastDigit 
//Run this in loop and get the reverse
```