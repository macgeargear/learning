1. Fibonacci Number and Golden Ratio

F_n / F_{n-1} approximate Golden Ratio

3. Fibomacci is a Complete Sequence (Like Power of 2)
- Every Posivie Integer can be written as sum of Fibonacci Number without using any Fibonacci Number more than once.
            | Fibonacci Code
| 4 = 1 + 3 | 1011
| 6 = 1 + 5 | 10011
| 7 = 2 + 5 | 01011


### More Properties of Fibonacci Number
4. Fibonacci Number can be written in the below matrix Form
```
A = [ 1 1 ]
    [ 1 0 ]
A^n = [F_n+1 F_n]
      [F_n F_n-1]
```

5. Cassini's Identity

```
F_n+1 * F_n-1 - F_n^2 = (-1)^n
```

6. Addition Rule

```
F_m+n = F_m*F_n+1 + F_m-1*F_n
A**m+n = A**m * A**n
```

7. For every positive integer **m**, F_mn is a mup=ltiple of F_n

8. Two Consecutive Fibonacci Number are always CoPrime, i.e. gcd(F_n, F_n+1) = 1

```
0, 1, 1, 2, 3, 5, 8, 13, 21
Proof by Induction:
    gcd(0, 1) = 1 | gcd(F_k, F_k+1) = gcd(F_k, F_k + F_k-1)
    gcd(1, 1) = 1 |                 = gcd(F_k, F_k-1) = 1
    
```

9. GCD(F_m, F_n) = F_gcd(m,n)

10. if F_n is multiple of F_m, then n is also a multiple of m.
