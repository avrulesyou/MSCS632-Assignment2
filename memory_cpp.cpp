#include <iostream>

int main() {
    // 1. Manual Allocation: Allocate an integer on the heap.
    int* my_num = new int(42);
    std::cout << "Allocated memory at: " << my_num << " with value: " << *my_num << std::endl;

    // *my_num = 100; // We can use the allocated memory.

    // 2. Manual Deallocation: The programmer MUST free the memory.
    delete my_num;
    std::cout << "Memory has been freed." << std::endl;

    // 3. Dangling Pointer: 'my_num' now points to invalid memory.
    // Accessing it is undefined behavior and can crash the program.
    // *my_num = 200; // DANGEROUS!

    // Forgetting 'delete my_num;' would cause a MEMORY LEAK.

    return 0;
}