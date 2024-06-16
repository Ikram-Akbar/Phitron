Great question! The reason we iterate only from the beginning to the middle of the array (and not all the way to the end) is because each swap operation affects two elements at once: one from the beginning half and one from the end half. If you were to continue the loop past the midpoint, you would end up swapping the elements back to their original positions.

Here's a detailed explanation:

1. **First Swap**: The first element is swapped with the last element.
2. **Second Swap**: The second element is swapped with the second-to-last element.
3. This continues until you reach the middle of the array.

At the midpoint, all elements have been swapped once, and there is no need to swap again.

### Visual Example
Consider an array of six elements:
```
Original: [1, 2, 3, 4, 5, 6]
```

- **First Iteration (i=0)**: Swap `arr[0]` and `arr[5]` → [6, 2, 3, 4, 5, 1]
- **Second Iteration (i=1)**: Swap `arr[1]` and `arr[4]` → [6, 5, 3, 4, 2, 1]
- **Third Iteration (i=2)**: Swap `arr[2]` and `arr[3]` → [6, 5, 4, 3, 2, 1]

At this point, we've reached the midpoint of the array. All elements are in their reversed positions:
```
Reversed: [6, 5, 4, 3, 2, 1]
```

If we continued past the midpoint:
- **Fourth Iteration (i=3)**: We would swap `arr[3]` and `arr[2]`, which undoes the previous swap.

So, iterating from the beginning to the middle ensures that each pair of elements is swapped only once.

### Iterating to the Middle
Here's the relevant code section to highlight why we iterate only to the midpoint:

```cpp
for (int i = 0; i < size / 2; ++i) {
    // Swap the elements
    int temp = arr[i];
    arr[i] = arr[size - 1 - i];
    arr[size - 1 - i] = temp;
}
```

- `i` runs from 0 to `size / 2 - 1`, ensuring that we stop at the midpoint.
- `arr[i]` is swapped with `arr[size - 1 - i]`.

### Why Not Iterate to the End?
If you iterate to the end, each element would be swapped twice, effectively bringing the array back to its original order:

1. **First Pass**: Correctly swaps elements.
2. **Second Pass**: Re-swaps the already swapped elements back to their original positions.

By iterating only to the midpoint, you avoid unnecessary swaps and ensure that the array is correctly reversed.

This is why the loop only runs to the midpoint: it efficiently reverses the array by swapping each pair of elements only once.