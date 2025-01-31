# Space Complexity
## Definition
Auxiliary space + Input Space

- **Auxiliary Space:** The space that you take to solve the problem
- **Input Space:** The space that you need to store the problem

```
e.g.
    Let's say, in a pseudocode

    take input a,b
    decalre c
    c = a+b
```
c -> Auxiliary space, as it is used to compute a+b \
a, b -> Input space, self-explanatory

### Point to be noted:
say something as simple as, \
c = a+b; ---(1) \
b = a+b; ---(2)

(1) is correct, but (2) isn't from **Interview POV** \
**Never ever manipulate the given data, use 3rd variables**


