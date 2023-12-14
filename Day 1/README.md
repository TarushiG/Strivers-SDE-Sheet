Variation 1 example:
## Explanation with an example:

**Context:** Let's calculate the element at position (5, 3) in Pascal's Triangle.

**1. Calculating nCr:**
* `n = 5` (row number)
* `r = 3` (column number, within chosen row)

The `nCr(n, r)` function uses a loop to calculate the binomial coefficient. It multiplies `n` by decreasing values from `n - 1` to `n - r` and divides by increasing values from `1` to `r`.

In this case:

- Loop iterates 3 times (from 0 to 2) because `r = 3`
- First iteration:
    - Multiply `n` (5) by `n - 0` (5) = 25
    - Divide by `1 + 0` (1) = 25
- Second iteration:
    - Multiply current `res` (25) by `n - 1` (4) = 100
    - Divide by `2 + 1` (3) = 33.33
- Third iteration:
    - Multiply current `res` (33.33) by `n - 2` (3) = 100
    - Divide by `3 + 1` (4) = 25

Therefore, `nCr(5, 3) = 25`.

**2. Finding element in Pascal's Triangle:**
* `r = 5` and `c = 3` as before

The `pascalTriangle(r, c)` function uses the calculated `nCr` value from the previous step. It simply calls `nCr(r - 1, c - 1)`, which essentially finds the element at the same position in the previous row of Pascal's Triangle.

In this case, `pascalTriangle(5, 3) = nCr(4, 2)`. Following the same process as before, we find `nCr(4, 2) = 6`.

**Therefore, the element at position (5, 3) in Pascal's Triangle is 6.**

**Note:** This code uses `long long` for `res` to handle larger values of n and r.

I hope this explanation clarifies the logic of the code and its outcome using a specific example. Please let me know if you have any further questions!
