# Heap Sort Algorithm Implementation
**Key Components:**
  1. **PrintArr Function**:
        Takes a vector of integers as a parameter.
        Prints the elements of the vector in a comma-separated format.
  2. **heapify Function**:
        Maintains the heap property of a binary heap.
        Takes a vector, its size, and the index of the node to be heapified.
        Compares the node with its children and swaps it with the largest child if necessary, recursively ensuring the heap property is maintained.
  3. **buildHeap Function**:
        Constructs a max heap from the given array.
        Starts from the last non-leaf node and calls heapify on each node in reverse order to ensure the entire array satisfies the heap property.
  4. **heapSort Function**:
        Implements the Heap Sort algorithm.
        First, it builds a **Max Heap using buildHeap method**.
        Then, it repeatedly swaps the root of the heap (the maximum element) with the last element of the heap and reduces the size of the heap, **calling heapify method** to maintain the heap property on the reduced heap.
