Create an algorithm/lib to order polynomials of the same variable based on their degree.

**_The main focus of the algorithm is to apply the best sorting strategy_**

**input:**

```bash
3x + x^3 - 4 + 2x^2
```

**output:**

```bash
x^3 + 2x^2 + 3x - 4
```

## **obs:** remember to reduce similar terms

**EX(input):**

```bash
3x + x^3 - 4 + 3x^3
```

```bash
#similar term: 1x^3 | 3x^3
#after reduction:  4x^3
```

**EX(output):**

```bash
4x^3 + 3x - 4
```
