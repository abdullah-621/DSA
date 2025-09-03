| Feature                    | Adjacency Matrix | Adjacency List |
| -------------------------- | ---------------- | -------------- |
| **Memory Usage**           | O(V²)            | O(V + E)       |
| **Check if edge exists**   | O(1)             | O(deg(v))      |
| **Iterate over neighbors** | O(V)             | O(deg(v))      |
| **Good for**               | Dense Graph      | Sparse Graph   |
| **Ease of Implementation** | Easier           | Medium         |

# Tree vs Graph

| Feature          | Graph                                | Tree                                |
| ---------------- | ------------------------------------ | ----------------------------------- |
| **Definition**   | Vertices + Edges                     | Special Graph (Connected + Acyclic) |
| **Connectivity** | May be connected or disconnected     | Always connected                    |
| **Cycles**       | Cycles থাকতে পারে                    | No cycles                           |
| **Edges**        | Up to `V(V-1)/2` (undirected)        | Always `V-1`                        |
| **Hierarchy**    | Not necessarily hierarchical         | Always hierarchical                 |
| **Types**        | Directed, Undirected, Weighted, etc. | Binary Tree, BST, AVL, Heap, etc.   |
| **Use Cases**    | Networks, Maps, Relations            | Hierarchy, Searching, Sorting       |
