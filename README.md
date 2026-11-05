# GCD and LCM in C++

A simple C++ program that calculates the **Greatest Common Divisor (GCD/HCF)** and **Least Common Multiple (LCM)** of two numbers.

This program demonstrates both **iterative and recursive approaches** for calculating GCD.

## 📌 Features

- Calculate GCD using an iterative approach
- Calculate GCD using recursion
- Calculate LCM using the GCD
- Uses the Euclidean Algorithm
- Simple and beginner-friendly C++ implementation

## 🧮 Concepts Used

### 1. GCD / HCF

GCD (Greatest Common Divisor), also called HCF (Highest Common Factor), is the largest number that divides two numbers without leaving a remainder.

For example:

```text
GCD(20, 4) = 4
```

### 2. Recursive GCD

The recursive function uses the Euclidean Algorithm:

```cpp
int RecGcd(int a, int b) {
    if(b == 0) return a;

    return RecGcd(b, a % b);
}
```

The recursion continues until `b` becomes `0`.

### 3. LCM

LCM (Least Common Multiple) is calculated using:

```text
LCM(a, b) = (a × b) / GCD(a, b)
```

In the program:

```cpp
int gcd = RecGcd(a, b);
return (a * b) / gcd;
```

## 💻 Code

```cpp
#include <iostream>
using namespace std;

// For GCD / HCF
int gcd(int a, int b) {

    while(a > 0 && b > 0) {

        if(a > b) {
            a = a % b;
        }
        else {
            b = b % a;
        }
    }

    if(a == 0) return b;
    return a;
}

// Recursive GCD
int RecGcd(int a, int b) {

    if(b == 0) return a;

    return RecGcd(b, a % b);
}

// For LCM
int lcm(int a, int b) {

    int gcd = RecGcd(a, b);

    return (a * b) / gcd;
}

int main() {

    int a = 20;
    int b = 4;

    cout << lcm(a, b);

    return 0;
}
```

## ▶️ Example

### Input

```text
a = 20
b = 4
```

### Output

```text
20
```

Because:

```text
GCD(20, 4) = 4

LCM(20, 4)
= (20 × 4) / 4
= 20
```

## ⏱️ Time Complexity

### Iterative GCD

```text
O(log(min(a, b)))
```

### Recursive GCD

```text
O(log(min(a, b)))
```

### LCM

The LCM calculation depends on the GCD calculation:

```text
O(log(min(a, b)))
```

## 📚 Algorithms Used

- Euclidean Algorithm
- Recursion
- Modulo (`%`) operation

## 🎯 Learning Outcome

This program helps understand:

- How GCD/HCF works
- How the Euclidean Algorithm works
- How recursion can solve mathematical problems
- How GCD can be used to calculate LCM
- Basic time-complexity analysis

## 🛠️ Technologies

- **Language:** C++
- **Compiler:** GCC / g++
- **Editor:** Visual Studio Code

## 👨‍💻 Author

**Sarbar Alam**

---

⭐ If you find this useful, consider giving the repository a star.
