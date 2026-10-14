class Solution {
public:
    int fib(int n) {
      
    if (n <= 1) {
        return n; // Base case: returns 0 or 1
    }
    return fib(n - 1) + fib(n - 2); // Recursive step
}

   
};