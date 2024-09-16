Given your input:

```
6 6
0 1 
1 5
0 4
0 3
3 4
2 4
```

Here’s what your code will do:

1. **Graph Initialization:**
   - The graph has 6 nodes (`n = 6`) and 6 edges (`e = 6`).
   - An adjacency matrix `mat` of size `6 x 6` will be created and initialized with zeros.

2. **Input Edges:**
   - You are reading 6 edges and updating the adjacency matrix accordingly:
     - Between nodes 0 and 1 → `mat[0][1] = 1` and `mat[1][0] = 1`
     - Between nodes 1 and 5 → `mat[1][5] = 1` and `mat[5][1] = 1`
     - Between nodes 0 and 4 → `mat[0][4] = 1` and `mat[4][0] = 1`
     - Between nodes 0 and 3 → `mat[0][3] = 1` and `mat[3][0] = 1`
     - Between nodes 3 and 4 → `mat[3][4] = 1` and `mat[4][3] = 1`
     - Between nodes 2 and 4 → `mat[2][4] = 1` and `mat[4][2] = 1`

3. **Checking Edge Between Nodes 3 and 0:**
   - The code checks whether there is an edge between node 3 and node 0 using `if (mat[3][0] == 1)`.
   - Since `mat[3][0] = 1` (because of the input edge between 0 and 3), the program will output:
     ```
     found
     ```

### Example Output:
```
 found
```

