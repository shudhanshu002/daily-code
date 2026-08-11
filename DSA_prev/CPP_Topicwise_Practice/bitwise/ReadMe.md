<!-- markdownlint-disable MD025 -->
# bit is set

## Check if a specific bit is set

```js
bool isSet = (n & (1 << k));
```

## Find the position of the rightmost set bit

```js
int rightmostSetBit = n & -n;
```

# Count total number of set bits

```cpp
int count = 0;
while(n > 0) {
    if(n & 1) count++;
    n >>= 1;
}
```

```js
Brian Kernighan’s Algorithm
int count = 0;
while(n > 0) {
    n = n & (n - 1); // removes the rightmost set bit
    count++;
}

```

## getting rightmost set bit

```cpp
int pos = log2(n & -n) + 1;
```

```cpp
int pos = __builtin_ffs(n); // returns 1-based index of lowest set bit

// n = 12 (1100)
// pos = 3

```

## getting left most set bit

```cpp
int pos = (int)log2(n) + 1;
```

```cpp
int pos = 32 - __builtin_clz(n); // count leading zeros
```

# Bit masking

## Check if the i-th bit is set

```cpp
if (n & (1 << i)) 
    cout << "Set";
else 
    cout << "Not set";
```

## Set the ith bit

```cpp
n = n | (1 << i);
```

## Unset ith bit

```cpp
n = n & ~(1 << i);
```

## Toggle the ith-bit

```cpp
n = n ^ (1 << i);
```

## Remove the rightmost bit

```cpp
n = n & (n - 1);
```

## Advanced bit Applications

```cpp
int ones = 0, twos = 0;
for(int x : arr) {
    ones = (ones ^ x) & ~twos;
    twos = (twos ^ x) & ~ones;
}
return ones;
```

## Gray codes

```js
int bin = gray;
while (gray >>= 1) bin ^= gray;
```

## Fast Exponentiation using bits

```cpp
int power(int a, int b) {
    int res = 1;
    while(b > 0) {
        if(b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
```
