class Solution {
private:
    long long MOD = 1e9 + 7;

    
    long long power(long long base, long long exp) {
        long long res = 1;
        base %= MOD;
        while (exp > 0) {
            if (exp & 1) {
                res = (res * base) % MOD;
            }
            base = (base * base) % MOD;
            exp >>= 1;
        }
        return res;
    }

public:
    int countGoodNumbers(long long n) {
        long long evens = (n + 1) / 2;
        long long odds = n / 2;
        
        long long first = power(5, evens);
        long long second = power(4, odds);
        
        return (int)((first * second) % MOD);
    }
};