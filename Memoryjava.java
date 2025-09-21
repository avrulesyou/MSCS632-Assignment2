public class MemoryJava {
    public static void main(String[] args) {
        // 1. Allocation: The 'new' keyword allocates memory for an object.
        String my_string = new String("Hello from the heap!");
        System.out.println("Object created: " + my_string);

        // 2. Deallocation is AUTOMATIC.
        // When 'my_string' is no longer reachable, the GC will free it.
        // We can make it unreachable by setting its reference to null.
        my_string = null; 

        // At some point in the future, the GC will run and clean up the "Hello..." string.
        // We can suggest that the GC runs, but we can't force it.
        System.gc(); 

        System.out.println("Reference is now null. Memory will be reclaimed by GC.");
    }
}