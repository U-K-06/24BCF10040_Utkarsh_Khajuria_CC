class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        long long MOD = 1e9 + 7;
        long long lcm_ab = lescm(a, b);
        long long lo = min(a, b), hi = (long long)n * min(a, b);
        
        while (lo < hi) {
            long long mid = (lo + hi) / 2;
            if (mid / a + mid / b - mid / lcm_ab < n)
                lo = mid + 1;
            else
                hi = mid;
        }
        
        return lo % MOD;
    }
};
