fn main() {
    // 1. Allocation: String::from allocates memory on the heap for "hello".
    // The variable 's1' is the "owner" of this memory.
    let s1 = String::from("hello");
    println!("s1 owns the data: '{}'", s1);

    // 2. Ownership Transfer (Move): When s1 is assigned to s2, ownership
    // of the heap data is MOVED to s2. s1 is now invalid.
    let s2 = s1; 

    // This line will NOT compile because s1 no longer owns the data.
    // It prevents a "double free" error where both s1 and s2 try to free the same memory.
    // println!("Trying to use s1: {}", s1); // COMPILE-TIME ERROR!

    println!("s2 now owns the data: '{}'", s2);

    // 3. Deallocation is AUTOMATIC and DETERMINISTIC.
    // When s2 goes out of scope at the end of main(), its memory is
    // automatically freed. No GC, no forgetting 'delete'.
}