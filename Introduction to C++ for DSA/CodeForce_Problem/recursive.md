Let's analyze each case to understand the behavior of the `print_num` function and the differences between the three cases:

### Case 1
```cpp
#include<bits/stdc++.h>
using namespace std;

void print_num(int n) {
    if (n == 0) {
        return;
    }
    print_num(n-1);
    cout << n << endl;
}

int main() {
    int n;
    cin >> n;
    print_num(n);
    return 0;
}
```
**Explanation:**

1. **Base Case:** If `n` is 0, the function returns without doing anything.
2. **Recursive Call:** The function calls `print_num(n-1)`, which means it decrements `n` and makes a recursive call.
3. **Print Statement:** After returning from the recursive call, it prints the value of `n`.

This results in printing numbers from 1 to `n` in ascending order because the recursive call happens first, and the `cout << n << endl;` statement is executed after the entire recursion stack has been built.

### Case 2
```cpp
#include<bits/stdc++.h>
using namespace std;

void print_num(int n) {
    if (n == 0) {
        return;
    }
    print_num(n--);
    cout << n << endl;
}

int main() {
    int n;
    cin >> n;
    print_num(n);
    return 0;
}
```
**Explanation:**

1. **Base Case:** If `n` is 0, the function returns without doing anything.
2. **Recursive Call:** The function calls `print_num(n--)`. The postfix decrement operator `n--` returns the value of `n` before decrementing it.
3. **Segmentation Fault:** This leads to an infinite recursion because `n` is passed as the same value in the recursive call (since the decrement happens after the value is used). The recursion never reaches the base case and eventually causes a stack overflow, leading to a segmentation fault.

### Case 3
```cpp
#include<bits/stdc++.h>
using namespace std;

void print_num(int n) {
    if (n == 0) {
        return;
    }
    print_num(--n);
    cout << n << endl;
}

int main() {
    int n;
    cin >> n;
    print_num(n);
    return 0;
}
```
**Explanation:**

1. **Base Case:** If `n` is 0, the function returns without doing anything.
2. **Recursive Call:** The function calls `print_num(--n)`. The prefix decrement operator `--n` decrements `n` first and then passes the decremented value to the recursive call.
3. **Print Statement:** After returning from the recursive call, it prints the value of `n`.

This results in printing numbers from 0 to `n-1` in ascending order because the decrement happens before the recursive call, and the `cout << n << endl;` statement is executed after the recursion returns.

### Summary
- **Case 1:** Correctly prints numbers from 1 to `n` because the decrement happens before the recursive call and the print statement is executed after the recursion returns.
- **Case 2:** Causes a segmentation fault due to infinite recursion because the value of `n` is not decremented before the recursive call.
- **Case 3:** Prints numbers from 0 to `n-1` because the decrement happens before the recursive call and the print statement is executed after the recursion returns.