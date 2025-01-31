# Time Complexity
## Definition
Rate at which the time taken increases wrt to the input size.

## Big - O Notation -> O(no. of steps)

Here's one example:
```cpp
for(i=1;i<=5;i++>){
    cout << "Rupam"
}
```
### There are 4 steps in 1 iteration of this piece of code:
- i=1, assigning value \
- i<=5, checking condition \
- cout << "Rupam", print statement
- i++, increment


### Now you can't always manually count, it's hectic. Here comes the **3 Rules**:
- Always compute time complexity in terms of **Worst case scenario**
- **Avoid Constants**
- **Avoid lower values**

Now for the previous example the last three steps repeat, 5*3 = 15 times.
So, TC = O(15)
But we don't use numbers to represent TC, so let's change the code, in general:
```cpp
for(i=1;i<=n;i++>){
    cout << "Rupam"
}
```
TC = O(n*3) = O(3n)

## Cases
- Best case
- Average case
- Worst case

Let's take a code snippet to discuss:
```cpp
if(marks<25){
    cout << "Grade D"
}else if(marks<45){
    cout << "Grade C"
}else if(marks<65){
    cout << "Grade B"
}else{
    cout << "Grade A"
}
```

- Now if, input **marks = 10** => Best Case, as O(2)
- Now if, input **marks = 70** => Worst Case, as O(4)

#### We must always compute TC in worst case scenario as if it performs optimally in worst case the best case will automatically be better. Pretty common sense.

#### Average case is the mean of Best & Worst Case, self-explanatory
```md
# Why avoid constants ? 
```
Let's modify the previous code snippet:
```cpp
int x =2;
for(i=1;i<=n;i++>){
    cout << "Rupam"
}
```
The declaration and assignment is just 1 operation adding to the huge TC, doesn't make any significant difference, that's why we avoid constants.
```
e.g.
    O(4n^3 + 3n^2 + 8), now if n = 10^5, then 8 itself doesn't make any significant difference so we can omit it
```

```md
# Why avoid lower values ? 
```
From the same example adding 10^10 to 10^15 has very less/ negligible significance, so we can omit them as well

## Other Notaions
- Big -Oh (O) -> Worst case [Upper bound]
- Theta -> Average
- Omega -> Best cae [Lower bound]